#ifndef CREATE_H
#define CREATE_H

#include <QWidget>

namespace Ui {
class Create;
}

class Create : public QWidget
{
    Q_OBJECT

public:
    explicit Create(QWidget *parent = nullptr);
    ~Create();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_clicked();

private:
    Ui::Create *ui;
};

#endif // CREATE_H
