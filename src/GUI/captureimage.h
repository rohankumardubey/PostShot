#ifndef CAPTUREIMAGE_H
#define CAPTUREIMAGE_H

#include <QWidget>
#include <QMainWindow>
#include <QPixmap>
#include <QLabel>
#include "Modules/windowhelper.h"

#include <QGraphicsScene>
#include <QGraphicsView>

class CaptureImage : public QMainWindow
{
    Q_OBJECT
public:
    /*!
     * \brief fadeIn Create a new object of the Capture Image Window
     */
    explicit CaptureImage(QWidget* parent = nullptr);

signals:

public slots:

private:
    QGraphicsScene* scene;
    QGraphicsView* view;
    QPixmap image;
    QLabel* label;
    QList<Helper::Window> windows;

protected:
    /*!
     * \brief eventFilter Qt event handler (key press)
     */
    bool eventFilter(QObject* obj, QEvent* event);
};

#endif // CAPTUREIMAGE_H
