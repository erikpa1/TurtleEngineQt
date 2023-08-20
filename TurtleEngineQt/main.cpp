#include <QtWidgets/QApplication>


#include "TurtleMainWindow.h"

#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QGraphicsDropShadowEffect>


using namespace tui;

//int main(int argc, char* argv[])
//{
//	QApplication a(argc, argv);
//	TurtleMainWindow w;
//	w.show();
//	return a.exec();
//}

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    QWidget mainWindow;
    mainWindow.resize(800, 600);


    mainWindow.setStyleSheet("background-color: #dae0e6;");

    // Create a QVBoxLayout for the main window
    QHBoxLayout* mainLayout = new QHBoxLayout;
    mainLayout->setContentsMargins(0, 0, 0, 0);


    // Create a widget to be scaled
    QPushButton* scalingButton = new QPushButton("Scaling Button");
    scalingButton->setStyleSheet("background-color: red;");
    QPushButton* scalingButton1 = new QPushButton("Scaling Button");
    scalingButton1->setStyleSheet("background-color: red;");
    QPushButton* scalingButton2 = new QPushButton("Scaling Button");
    scalingButton2->setStyleSheet("background-color: white;");

    auto leftWidget = new QWidget();
    leftWidget->setFixedWidth(100);
    leftWidget->setContentsMargins(0, 0, 0, 0);

    
    auto vbox = new QVBoxLayout();
    vbox->setSpacing(10);
    vbox->addWidget(scalingButton1);
    vbox->addWidget(scalingButton2);



    leftWidget->setLayout(vbox);


    QGraphicsDropShadowEffect* shadowEffect = new QGraphicsDropShadowEffect;
    shadowEffect->setOffset(1, 0); // Set the shadow offset (rightwards)
    shadowEffect->setColor(Qt::black); // Set the shadow color
    shadowEffect->setBlurRadius(30); // Set the shadow blur radius

    // Apply the shadow effect to the QLabel
    leftWidget->setGraphicsEffect(shadowEffect);

    leftWidget->setStyleSheet("background-image: url(:Textures/Textures/AppBackgroundBlured.png);"
        "background-color: #00597b;"
        "background-repeat: no-repeat;"
        "background-position: bottom;");



    // Add the scaled widget to the layout
    mainLayout->addWidget(leftWidget);
    mainLayout->addWidget(scalingButton1);

    // Set the layout as the main layout for the main window
    mainWindow.setLayout(mainLayout);

    mainWindow.show();

    return app.exec();
}