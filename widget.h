#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();


private slots:

    bool fillArrayFromTable(int *array, int size);

    void fillTableFromArray(int *array, int size);

    void randNumsIntoTable(int size);

    void bubbleSort(int *array,int size);

    void hairbrushSort(int *m,int n);

    void bogosort(int  *array, int size);

    void gnomeSort(int *array, int size);

    void quickSort(int *array, int size);

    void on_fastSortButton_clicked();

    void on_hairbrushSortButton_clicked();

    void on_bubbleSortButton_clicked();

    void on_monkeSortButton_clicked();

    void on_gnomeSortButton_clicked();

    void on_maxButton_clicked();

    void on_minButton_clicked();

    void on_srzButton_clicked();

    void on_randomButton_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_countEdit_textChanged(const QString &arg1);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
