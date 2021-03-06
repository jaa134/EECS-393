#include "commutewidget.h"
#include "ui_commutewidget.h"

CommuteWidget::CommuteWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CommuteWidget)
{
    ui->setupUi(this);

    //timer to update widget
    service = new CommuteWidgetService();
    service->moveToThread(&serviceThread);
    connect(service, &CommuteWidgetService::updated, this, &CommuteWidget::display);
    serviceThread.start();
    service->init();
}

CommuteWidget::~CommuteWidget()
{
    delete ui;
    serviceThread.quit();
    serviceThread.wait();
}

void CommuteWidget::display() {
    //show information in the ui
    ui->arrivalValue->setText(service->commute.arrivalTime);
    ui->durationValue->setText(service->commute.totalTime);
    ui->trafficValue->setText(service->commute.trafficVolume);
}
