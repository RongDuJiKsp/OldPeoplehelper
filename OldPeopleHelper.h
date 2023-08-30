#pragma once
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QApplication>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <QDebug>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
class Ui_MainWindow :public QMainWindow
{
	Q_OBJECT
private:
	QWidget* centralwidget;
	QPushButton* shutDownButton;
	QPushButton* restartButton;
	QSlider* hourSlider;
	QSpinBox* hourInput;
	QSpinBox* minueInput;
	QSpinBox* secondInput;
	QSlider* minueSlider;
	QSlider* secondSlider;
	QLabel* label;
	QLabel* label_2;
	QLabel* label_3;
	QPushButton* timeShutdownButton;
	QLineEdit* searchInput;
	QCommandLinkButton* searchBUtton;
	QGroupBox* searchBox;
	QCommandLinkButton* cancelShutdown;
	std::vector<QRadioButton*> searchEnergeRadioList;
	std::vector<std::string> searchEnergeAddressList;
	const int locaConfig[5] = { 10,20,95,20,20 };
	void setupUi(QMainWindow* MainWindow)
	{
		if (MainWindow->objectName().isEmpty())
			MainWindow->setObjectName("MainWindow");
		MainWindow->resize(800, 600);
		centralwidget = new QWidget(MainWindow);
		centralwidget->setObjectName("centralwidget");
		shutDownButton = new QPushButton(centralwidget);
		shutDownButton->setObjectName("shutDownButton");
		shutDownButton->setGeometry(QRect(80, 510, 161, 61));
		restartButton = new QPushButton(centralwidget);
		restartButton->setObjectName("restartButton");
		restartButton->setGeometry(QRect(300, 510, 161, 61));
		hourSlider = new QSlider(centralwidget);
		hourSlider->setObjectName("hourSlider");
		hourSlider->setGeometry(QRect(30, 80, 111, 31));
		hourSlider->setOrientation(Qt::Horizontal);
		hourInput = new QSpinBox(centralwidget);
		hourInput->setObjectName("hourInput");
		hourInput->setGeometry(QRect(30, 20, 121, 41));
		minueInput = new QSpinBox(centralwidget);
		minueInput->setObjectName("minueInput");
		minueInput->setGeometry(QRect(230, 20, 121, 41));
		secondInput = new QSpinBox(centralwidget);
		secondInput->setObjectName("secondInput");
		secondInput->setGeometry(QRect(440, 20, 121, 41));
		minueSlider = new QSlider(centralwidget);
		minueSlider->setObjectName("minueSlider");
		minueSlider->setGeometry(QRect(230, 80, 111, 31));
		minueSlider->setOrientation(Qt::Horizontal);
		secondSlider = new QSlider(centralwidget);
		secondSlider->setObjectName("secondSlider");
		secondSlider->setGeometry(QRect(440, 80, 111, 31));
		secondSlider->setOrientation(Qt::Horizontal);
		label = new QLabel(centralwidget);
		label->setObjectName("label");
		label->setGeometry(QRect(150, 20, 71, 41));
		label_2 = new QLabel(centralwidget);
		label_2->setObjectName("label_2");
		label_2->setGeometry(QRect(360, 20, 71, 41));
		label_3 = new QLabel(centralwidget);
		label_3->setObjectName("label_3");
		label_3->setGeometry(QRect(580, 20, 71, 41));
		timeShutdownButton = new QPushButton(centralwidget);
		timeShutdownButton->setObjectName("timeShutdownButton");
		timeShutdownButton->setGeometry(QRect(620, 50, 161, 61));
		searchInput = new QLineEdit(centralwidget);
		searchInput->setObjectName("searchInput");
		searchInput->setGeometry(QRect(30, 170, 561, 31));
		searchBUtton = new QCommandLinkButton(centralwidget);
		searchBUtton->setObjectName("searchBUtton");
		searchBUtton->setGeometry(QRect(600, 170, 186, 41));
		searchBox = new QGroupBox(centralwidget);
		searchBox->setObjectName("searchBox");
		searchBox->setGeometry(QRect(20, 230, 120, 0));
		cancelShutdown = new QCommandLinkButton(centralwidget);
		cancelShutdown->setObjectName("cancelShutdown");
		cancelShutdown->setGeometry(QRect(600, 120, 186, 41));
		MainWindow->setCentralWidget(centralwidget);

		retranslateUi(MainWindow);

		QMetaObject::connectSlotsByName(MainWindow);
	} // setupUi
	void retranslateUi(QMainWindow* MainWindow)
	{
		MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
		shutDownButton->setText(QCoreApplication::translate("MainWindow", "\344\270\200\351\224\256\345\205\263\346\234\272", nullptr));
		restartButton->setText(QCoreApplication::translate("MainWindow", "\344\270\200\351\224\256\351\207\215\345\220\257", nullptr));
		label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">\346\227\266</span></p></body></html>", nullptr));
		label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">\345\210\206</span></p></body></html>", nullptr));
		label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">\347\247\222</span></p></body></html>", nullptr));
		timeShutdownButton->setText(QCoreApplication::translate("MainWindow", "\345\256\232\346\227\266\345\205\263\346\234\272", nullptr));
		searchInput->setText(QString());
		searchBUtton->setText(QCoreApplication::translate("MainWindow", "\344\270\200\351\224\256\346\220\234\347\264\242", nullptr));
		searchBox->setTitle(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\220\234\347\264\242\345\274\225\346\223\216", nullptr));
		cancelShutdown->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210\345\256\232\346\227\266\345\205\263\346\234\272", nullptr));
	} // retranslateUi
	void setMaxMinValue(void) {
		hourSlider->setMinimum(0);
		hourSlider->setMaximum(999);
		hourInput->setMinimum(0);
		hourInput->setMaximum(999);
		minueSlider->setMinimum(0);
		minueSlider->setMaximum(59);
		minueInput->setMinimum(0);
		minueInput->setMaximum(59);
		secondSlider->setMinimum(0);
		secondSlider->setMaximum(59);
		secondInput->setMinimum(0);
		secondInput->setMaximum(59);
	}
	void setResetValue(void) {
		searchBox->setAlignment(Qt::AlignCenter);
		if (searchEnergeRadioList.size() > 0) searchEnergeRadioList.at(0)->setChecked(true);
	}
	void loadConfig(void) {
		std::string engName, engLoca;
		int loca = 0;
		QRadioButton* tmp;
		std::ifstream cfgfile;
		cfgfile.open("config.cfg");
		while ( cfgfile>> engName >> engLoca) {
			tmp = new QRadioButton(searchBox);
			tmp->setObjectName(engName);
			tmp->setText(QString::fromLocal8Bit(engName));
			tmp->setGeometry(QRect(locaConfig[0], locaConfig[1]+ locaConfig[4]* loca, locaConfig[2], locaConfig[3]));
			loca++;
			searchEnergeRadioList.push_back(tmp);
			searchEnergeAddressList.push_back(engLoca);
		}
		searchBox->setGeometry(QRect(20, 230, 120, loca*30));
		cfgfile.close();
	}
	void connectSignal(void) {
		QObject::connect(shutDownButton, &QPushButton::clicked, this, [&] {
			system("shutdown -s -t 1");
			QApplication::exit();
			});
		QObject::connect(restartButton, &QPushButton::clicked, this, [&] {
			system("shutdown -r -t 1");
			QApplication::exit();
			});
		QObject::connect(timeShutdownButton, &QPushButton::clicked, this, [&] {
			int timeer = hourInput->value() * 3600 + minueInput->value() * 60 + secondInput->value();
			system((std::string("shutdown -r -t ") + std::to_string(timeer)).c_str());
			});
		QObject::connect(cancelShutdown, &QCommandLinkButton::clicked, this, [&] {
			system("shutdown -a");
			});
		QObject::connect(searchBUtton, &QCommandLinkButton::clicked, this, [&] {
			int i;
			for (i = 0; i < searchEnergeRadioList.size(); i++) {
				if (searchEnergeRadioList[i]->isChecked()) 
					system((std::string("start ") + searchEnergeAddressList[i] + searchInput->text().toLocal8Bit().toStdString()).c_str());
			}
			});
			
	}
	void connectBind(void) {
		QObject::connect(hourSlider, &QSlider::valueChanged, this, [&] {
			hourInput->setValue(hourSlider->value());
			});
		QObject::connect(hourInput, &QSpinBox::valueChanged, this, [&] {
			hourSlider->setValue(hourInput->value());
			});
		QObject::connect(minueSlider, &QSlider::valueChanged, this, [&] {
			minueInput->setValue(minueSlider->value());
			});
		QObject::connect(minueInput, &QSpinBox::valueChanged, this, [&] {
			minueSlider->setValue(minueInput->value());
			});
		QObject::connect(secondSlider, &QSlider::valueChanged, this, [&] {
			secondInput->setValue(secondSlider->value());
			});
		QObject::connect(secondInput, &QSpinBox::valueChanged, this, [&] {
			secondSlider->setValue(secondInput->value());
			});
	}
public:
	Ui_MainWindow() {
		setupUi(this);
		loadConfig();
		setMaxMinValue();
		setResetValue();
		connectSignal();
		connectBind();
	}

};
