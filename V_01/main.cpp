#include <QApplication>
#include <QtGui>
#include <QPushButton>
int main(int argc,char **argv){
    QApplication app(argc,argv);
    QPushButton button ("Hello");
    QPushButton button2 ("Aron",&button);
    button.show();
    std::cout<< "He ma njish";
    return app.exec();
}
