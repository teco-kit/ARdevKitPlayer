/********************************************************************************
** Form generated from reading UI file 'Player.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_H
#define UI_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TemplateWindowClass
{
public:
    QAction *menu_file_close;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QMenu *menu_file;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TemplateWindowClass)
    {
        if (TemplateWindowClass->objectName().isEmpty())
            TemplateWindowClass->setObjectName(QStringLiteral("TemplateWindowClass"));
        TemplateWindowClass->resize(1024, 821);
        menu_file_close = new QAction(TemplateWindowClass);
        menu_file_close->setObjectName(QStringLiteral("menu_file_close"));
        centralWidget = new QWidget(TemplateWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView->setFrameShadow(QFrame::Plain);
        graphicsView->setLineWidth(0);

        verticalLayout->addWidget(graphicsView);

        TemplateWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TemplateWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 21));
        menu_file = new QMenu(menuBar);
        menu_file->setObjectName(QStringLiteral("menu_file"));
        TemplateWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TemplateWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TemplateWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TemplateWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TemplateWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menu_file->menuAction());
        menu_file->addAction(menu_file_close);

        retranslateUi(TemplateWindowClass);

        QMetaObject::connectSlotsByName(TemplateWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *TemplateWindowClass)
    {
        TemplateWindowClass->setWindowTitle(QApplication::translate("TemplateWindowClass", "ARdevKit - Player", 0));
        menu_file_close->setText(QApplication::translate("TemplateWindowClass", "Beenden", 0));
#ifndef QT_NO_TOOLTIP
        menu_file_close->setToolTip(QApplication::translate("TemplateWindowClass", "Beendet das Programm", 0));
#endif // QT_NO_TOOLTIP
        menu_file_close->setShortcut(QApplication::translate("TemplateWindowClass", "Ctrl+Q", 0));
        menu_file->setTitle(QApplication::translate("TemplateWindowClass", "Datei", 0));
    } // retranslateUi

};

namespace Ui {
    class TemplateWindowClass: public Ui_TemplateWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_H
