
#include <QtGui>

#include "canvas.h""
#include <QBuffer>
#include <QByteArray>
#include <QSqlQuery>
//! [0]
Canvas::Canvas(QWidget *parent)
    : QWidget(parent)
{
    setAttribute(Qt::WA_StaticContents);
    modified = false;
    scribbling = false;
    myPenWidth = 1;
    myPenColor = Qt::blue;
}
//! [0]

//! [1]
bool Canvas::openImage(const QString &fileName)
//! [1] //! [2]
{
        QString qry = "SELECT image from canvas_images ORDER BY ID DESC LIMIT 1";
        QSqlQuery query;
        query.prepare(qry);
        query.exec();
        query.next();
        QByteArray ba1 = query.value(0).toByteArray();
        QPixmap pic;
        pic.loadFromData( ba1);
        QImage im = pic.toImage();
    QSize newSize = pic.size().expandedTo(size());
     resizeImage(&im, newSize);
    image =im;
    modified = false;
    update();
    return true;
}
//! [2]

//! [3]
bool Canvas::saveImage(const QString &fileName, const char *fileFormat)
//! [3] //! [4]
{
    QImage visibleImage = image;
    resizeImage(&visibleImage, size());

    if (visibleImage.save(fileName, fileFormat)) {
        modified = false;
        return true;
    } else {
        return false;
    }
}
//! [4]

//! [5]
void Canvas::setPenColor(const QColor &newColor)
//! [5] //! [6]
{
    myPenColor = newColor;
}
//! [6]

//! [7]
void Canvas::setPenWidth(int newWidth)
//! [7] //! [8]
{
    myPenWidth = newWidth;
}
//! [8]

//! [9]
void Canvas::clearImage()
//! [9] //! [10]
{
    image.fill(qRgb(255, 255, 255));
    modified = true;
    update();
}
//! [10]

//! [11]
void Canvas::mousePressEvent(QMouseEvent *event)
//! [11] //! [12]
{
    if (event->button() == Qt::LeftButton) {
        lastPoint = event->pos();
        scribbling = true;
    }
}

void Canvas::mouseMoveEvent(QMouseEvent *event)
{
    if ((event->buttons() & Qt::LeftButton) && scribbling)
        drawLineTo(event->pos());
}

void Canvas::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && scribbling) {
        drawLineTo(event->pos());
        scribbling = false;
    }
}

//! [12] //! [13]
void Canvas::paintEvent(QPaintEvent *event)
//! [13] //! [14]
{
    QPainter painter(this);
    QRect dirtyRect = event->rect();
    painter.drawImage(dirtyRect, image, dirtyRect);
}
//! [14]

//! [15]
void Canvas::resizeEvent(QResizeEvent *event)
//! [15] //! [16]
{
    if (width() > image.width() || height() > image.height()) {
        int newWidth = qMax(width() + 128, image.width());
        int newHeight = qMax(height() + 128, image.height());
        resizeImage(&image, QSize(newWidth, newHeight));
        update();
    }
    QWidget::resizeEvent(event);
}
//! [16]

//! [17]
void Canvas::drawLineTo(const QPoint &endPoint)
//! [17] //! [18]
{
    QPainter painter(&image);
    painter.setPen(QPen(myPenColor, myPenWidth, Qt::SolidLine, Qt::RoundCap,
                        Qt::RoundJoin));
    painter.drawLine(lastPoint, endPoint);
    modified = true;

    int rad = (myPenWidth / 2) + 2;
    update(QRect(lastPoint, endPoint).normalized()
                                     .adjusted(-rad, -rad, +rad, +rad));
    lastPoint = endPoint;
}
//! [18]

//! [19]
void Canvas::resizeImage(QImage *image, const QSize &newSize)
//! [19] //! [20]
{
    if (image->size() == newSize)
        return;

    QImage newImage(newSize, QImage::Format_RGB32);
    newImage.fill(qRgb(255, 255, 255));
    QPainter painter(&newImage);
    painter.drawImage(QPoint(0, 0), *image);
    *image = newImage;
}
//! [20]

//! [21]
void Canvas::print()
{
#ifndef QT_NO_PRINTER
    QPrinter printer(QPrinter::HighResolution);

    QPrintDialog *printDialog = new QPrintDialog(&printer, this);
//! [21] //! [22]
    if (printDialog->exec() == QDialog::Accepted) {
        QPainter painter(&printer);
        QRect rect = painter.viewport();
        QSize size = image.size();
        size.scale(rect.size(), Qt::KeepAspectRatio);
        painter.setViewport(rect.x(), rect.y(), size.width(), size.height());
        painter.setWindow(image.rect());
        painter.drawImage(0, 0, image);
    }
#endif // QT_NO_PRINTER
}
//! [22]


