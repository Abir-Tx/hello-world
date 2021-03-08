#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class helloWorld; }
QT_END_NAMESPACE

class helloWorld : public QMainWindow
{
    Q_OBJECT

public:
    helloWorld(QWidget *parent = nullptr);
    ~helloWorld();

private slots:
    void on_pressme_clicked();

private:
    Ui::helloWorld *ui;
};
#endif // HELLOWORLD_H
