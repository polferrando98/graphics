#ifndef SCENEVIEW_H
#define SCENEVIEW_H

#include <QWidget>

class SceneView : public QWidget
{
    Q_OBJECT
public:
    explicit SceneView(QWidget *parent = nullptr);

public slots:
    void paintEvent(QPaintEvent *) override;
};

#endif // SCENEVIEW_H
