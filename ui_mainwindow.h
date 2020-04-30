/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionExit;
    QAction *actionFont_size;
    QAction *actionFont_Color;
    QAction *actionBold;
    QAction *actionItalics;
    QAction *actionUnderline;
    QAction *actionFind;
    QAction *actionFind_Replace;
    QAction *actionCursor_Line_Number;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuText;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/New.png"), QSize(), QIcon::Normal, QIcon::On);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/Open.png"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/Save.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSave->setIcon(icon2);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/icons/Cut.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCut->setIcon(icon3);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/Copy.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCopy->setIcon(icon4);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/paste.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPaste->setIcon(icon5);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/Undo.png"), QSize(), QIcon::Normal, QIcon::On);
        actionUndo->setIcon(icon6);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/Redo.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRedo->setIcon(icon7);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/Exit.png"), QSize(), QIcon::Normal, QIcon::On);
        actionExit->setIcon(icon8);
        actionFont_size = new QAction(MainWindow);
        actionFont_size->setObjectName(QString::fromUtf8("actionFont_size"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/FontSize.png"), QSize(), QIcon::Normal, QIcon::On);
        actionFont_size->setIcon(icon9);
        actionFont_Color = new QAction(MainWindow);
        actionFont_Color->setObjectName(QString::fromUtf8("actionFont_Color"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/FontColor.png"), QSize(), QIcon::Normal, QIcon::On);
        actionFont_Color->setIcon(icon10);
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/Bold.png"), QSize(), QIcon::Normal, QIcon::On);
        actionBold->setIcon(icon11);
        actionItalics = new QAction(MainWindow);
        actionItalics->setObjectName(QString::fromUtf8("actionItalics"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/italic.png"), QSize(), QIcon::Normal, QIcon::On);
        actionItalics->setIcon(icon12);
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/underline.png"), QSize(), QIcon::Normal, QIcon::On);
        actionUnderline->setIcon(icon13);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/Find.png"), QSize(), QIcon::Normal, QIcon::On);
        actionFind->setIcon(icon14);
        actionFind_Replace = new QAction(MainWindow);
        actionFind_Replace->setObjectName(QString::fromUtf8("actionFind_Replace"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/Replace.png"), QSize(), QIcon::Normal, QIcon::On);
        actionFind_Replace->setIcon(icon15);
        actionCursor_Line_Number = new QAction(MainWindow);
        actionCursor_Line_Number->setObjectName(QString::fromUtf8("actionCursor_Line_Number"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/LineNumber.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCursor_Line_Number->setIcon(icon16);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-10, -10, 271, 208));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font;
        font.setPointSize(11);
        textEdit->setFont(font);

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuText = new QMenu(menubar);
        menuText->setObjectName(QString::fromUtf8("menuText"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        MainWindow->insertToolBarBreak(toolBar_2);
        toolBar_3 = new QToolBar(MainWindow);
        toolBar_3->setObjectName(QString::fromUtf8("toolBar_3"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_3);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuText->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuText->addAction(actionBold);
        menuText->addAction(actionItalics);
        menuText->addAction(actionUnderline);
        menuText->addSeparator();
        menuText->addAction(actionFont_size);
        menuText->addAction(actionFont_Color);
        menuText->addSeparator();
        menuText->addAction(actionFind);
        menuText->addAction(actionFind_Replace);
        menuText->addAction(actionCursor_Line_Number);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionExit);
        toolBar_2->addAction(actionCut);
        toolBar_2->addAction(actionCopy);
        toolBar_2->addAction(actionPaste);
        toolBar_2->addAction(actionBold);
        toolBar_2->addAction(actionItalics);
        toolBar_2->addAction(actionUnderline);
        toolBar_2->addAction(actionFont_Color);
        toolBar_2->addAction(actionFont_size);
        toolBar_2->addAction(actionCursor_Line_Number);
        toolBar_3->addAction(actionUndo);
        toolBar_3->addAction(actionRedo);
        toolBar_3->addAction(actionFind);
        toolBar_3->addAction(actionFind_Replace);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy ", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste ", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo ", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionFont_size->setText(QCoreApplication::translate("MainWindow", "Font Size", nullptr));
        actionFont_Color->setText(QCoreApplication::translate("MainWindow", "Font Color", nullptr));
        actionBold->setText(QCoreApplication::translate("MainWindow", "Bold", nullptr));
#if QT_CONFIG(shortcut)
        actionBold->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionItalics->setText(QCoreApplication::translate("MainWindow", "Italics ", nullptr));
#if QT_CONFIG(shortcut)
        actionItalics->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUnderline->setText(QCoreApplication::translate("MainWindow", "Underline", nullptr));
#if QT_CONFIG(shortcut)
        actionUnderline->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind_Replace->setText(QCoreApplication::translate("MainWindow", "Replace", nullptr));
#if QT_CONFIG(shortcut)
        actionFind_Replace->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCursor_Line_Number->setText(QCoreApplication::translate("MainWindow", "Cursor Line Number", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuText->setTitle(QCoreApplication::translate("MainWindow", "Text", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
        toolBar_3->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
