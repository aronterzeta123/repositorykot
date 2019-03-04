#include <QApplication>
#include <QtGui>
#include <QPushButton>
int main(int argc,char **argv){
    QApplication app(argc,argv);
    QPushButton button ("Hello");
    button.show();
    return app.exec();
}
