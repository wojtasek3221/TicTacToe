#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
static bool turn;
static bool game;
//false o
//ture  x
void MainWindow::on_pushButton_10_clicked()
{
    ui->label->setStyleSheet("font-weight: bold; color:  #ff0000;");
    ui->label_2->setStyleSheet("color:  # #000000;");
    turn=false;
    game=true;
    ui->pushButton->setText("");
    ui->pushButton_2->setText("");
    ui->pushButton_3->setText("");
    ui->pushButton_4->setText("");
    ui->pushButton_5->setText("");
    ui->pushButton_6->setText("");
    ui->pushButton_7->setText("");
    ui->pushButton_8->setText("");
    ui->pushButton_9->setText("");
    ui->label_4->setText("0");
    ui->label_4->setText("0");
}
//sorry for not renaming the buttons. I might fix it later

void MainWindow::on_pushButton_clicked()
{
    if(ui->pushButton->text()=="" && game==true)
    {
        if(turn==false)
        {
            ui->pushButton->setText("o");
            ui->pushButton->setStyleSheet("color:  #ff0000;");
            turn=true;
            ui->label_2->setStyleSheet("font-weight: bold; color:  #0019ff;");
            ui->label->setStyleSheet("color:  # #000000;");
            checkwin();
        }
        else
        {
            ui->pushButton->setText("x");
            ui->pushButton->setStyleSheet("color:   #0019ff;");
            turn=false;
            ui->label->setStyleSheet("font-weight: bold; color:  #ff0000;");
            ui->label_2->setStyleSheet("color:  # #000000;");
            checkwin();
        }
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    if(ui->pushButton_5->text()=="" && game==true)
    {
        if(turn==false)
        {
            ui->pushButton_5->setText("o");
            ui->pushButton_5->setStyleSheet("color:  #ff0000;");
            turn=true;
            ui->label_2->setStyleSheet("font-weight: bold; color:  #0019ff;");
            ui->label->setStyleSheet("color:  # #000000;");
            checkwin();
        }
        else
        {
            ui->pushButton_5->setText("x");
            ui->pushButton_5->setStyleSheet("color:   #0019ff;");
            turn=false;
            ui->label->setStyleSheet("font-weight: bold; color:  #ff0000;");
            ui->label_2->setStyleSheet("color:  # #000000;");
            checkwin();
        }
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    if(ui->pushButton_2->text()=="" && game==true)
    {
        if(turn==false)
        {
            ui->pushButton_2->setText("o");
            ui->pushButton_2->setStyleSheet("color:  #ff0000;");
            turn=true;
            ui->label_2->setStyleSheet("font-weight: bold; color:  #0019ff;");
            ui->label->setStyleSheet("color:  # #000000;");
            checkwin();
        }
        else
        {
            ui->pushButton_2->setText("x");
            ui->pushButton_2->setStyleSheet("color:   #0019ff;");
            turn=false;
            ui->label->setStyleSheet("font-weight: bold; color:  #ff0000;");
            ui->label_2->setStyleSheet("color:  # #000000;");
            checkwin();
        }
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if(ui->pushButton_3->text()=="" && game==true)
    {
        if(turn==false)
        {
            ui->pushButton_3->setText("o");
            ui->pushButton_3->setStyleSheet("color:  #ff0000;");
            turn=true;
            ui->label_2->setStyleSheet("font-weight: bold; color:  #0019ff;");
            ui->label->setStyleSheet("color:  # #000000;");
            checkwin();
        }
        else
        {
            ui->pushButton_3->setText("x");
            ui->pushButton_3->setStyleSheet("color:   #0019ff;");
            turn=false;
            ui->label->setStyleSheet("font-weight: bold; color:  #ff0000;");
            ui->label_2->setStyleSheet("color:  # #000000;");
            checkwin();
        }
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    if(ui->pushButton_6->text()=="" && game==true)
    {
        if(turn==false)
        {
            ui->pushButton_6->setText("o");
            ui->pushButton_6->setStyleSheet("color:  #ff0000;");
            turn=true;
            ui->label_2->setStyleSheet("font-weight: bold; color:  #0019ff;");
            ui->label->setStyleSheet("color:  # #000000;");
            checkwin();
        }
        else
        {
            ui->pushButton_6->setText("x");
            ui->pushButton_6->setStyleSheet("color:   #0019ff;");
            turn=false;
            ui->label->setStyleSheet("font-weight: bold; color:  #ff0000;");
            ui->label_2->setStyleSheet("color:  # #000000;");
            checkwin();
        }
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    if(ui->pushButton_4->text()=="" && game==true)
    {
        if(turn==false)
        {
            ui->pushButton_4->setText("o");
            ui->pushButton_4->setStyleSheet("color:  #ff0000;");
            turn=true;
            ui->label_2->setStyleSheet("font-weight: bold; color:  #0019ff;");
            ui->label->setStyleSheet("color:  # #000000;");
            checkwin();
        }
        else
        {
            ui->pushButton_4->setText("x");
            ui->pushButton_4->setStyleSheet("color:   #0019ff;");
            turn=false;
            ui->label->setStyleSheet("font-weight: bold; color:  #ff0000;");
            ui->label_2->setStyleSheet("color:  # #000000;");
            checkwin();
        }
    }
}


void MainWindow::on_pushButton_7_clicked()
{
    if(ui->pushButton_7->text()=="" && game==true)
    {
        if(turn==false)
        {
            ui->pushButton_7->setText("o");
            ui->pushButton_7->setStyleSheet("color:  #ff0000;");
            turn=true;
            ui->label_2->setStyleSheet("font-weight: bold; color:  #0019ff;");
            ui->label->setStyleSheet("color:  # #000000;");
            checkwin();
        }
        else
        {
            ui->pushButton_7->setText("x");
            ui->pushButton_7->setStyleSheet("color:   #0019ff;");
            turn=false;
            ui->label->setStyleSheet("font-weight: bold; color:  #ff0000;");
            ui->label_2->setStyleSheet("color:  # #000000;");
            checkwin();
        }
    }
}


void MainWindow::on_pushButton_8_clicked()
{
    if(ui->pushButton_8->text()=="" && game==true)
    {
        if(turn==false)
        {
            ui->pushButton_8->setText("o");
            ui->pushButton_8->setStyleSheet("color:  #ff0000;");
            turn=true;
            ui->label_2->setStyleSheet("font-weight: bold; color:  #0019ff;");
            ui->label->setStyleSheet("color:  # #000000;");
            checkwin();
        }
        else
        {
            ui->pushButton_8->setText("x");
            ui->pushButton_8->setStyleSheet("color:   #0019ff;");
            turn=false;
            ui->label->setStyleSheet("font-weight: bold; color:  #ff0000;");
            ui->label_2->setStyleSheet("color:  # #000000;");
            checkwin();
        }
    }
}


void MainWindow::on_pushButton_9_clicked()
{
    if(ui->pushButton_9->text()=="" && game==true)
    {
        if(turn==false)
        {
            ui->pushButton_9->setText("o");
            ui->pushButton_9->setStyleSheet("color:  #ff0000;");
            turn=true;
            ui->label_2->setStyleSheet("font-weight: bold; color:  #0019ff;");
            ui->label->setStyleSheet("color:  # #000000;");
            checkwin();
        }
        else
        {
            ui->pushButton_9->setText("x");
            ui->pushButton_9->setStyleSheet("color:   #0019ff;");
            turn=false;
            ui->label->setStyleSheet("font-weight: bold; color:  #ff0000;");
            ui->label_2->setStyleSheet("color:  # #000000;");
            checkwin();
        }
    }
}
//c1 c2 c3
//c4 c5 c6
//c7 c8 c9
void MainWindow::checkwin()
{
    QString c1 = ui->pushButton->text();
    QString c2 = ui->pushButton_5->text();
    QString c3 = ui->pushButton_2->text();
    QString c4 = ui->pushButton_3->text();
    QString c5 = ui->pushButton_6->text();
    QString c6 = ui->pushButton_4->text();
    QString c7 = ui->pushButton_7->text();
    QString c8 = ui->pushButton_8->text();
    QString c9 = ui->pushButton_9->text();
    //-- -- --
    //c4 c5 c6
    //c7 c8 c9
    if(c1==c2 && c1==c3 && c2==c3)
    {
        if(c1 != "")
        {
            game = false;
            if(c1=="x")
            {
            ui->label_5->setText(QString::number(ui->label_4->text().toInt()+1));
            }
            else
            {
            ui->label_4->setText(QString::number(ui->label_4->text().toInt()+1));
            }
        }
    }
    //c1 c2 c3
    //-- -- --
    //c7 c8 c9
    else if(c4==c5 && c4==c6 && c5==c6)
    {
        if(c4 != "")
        {
            game = false;
            if(c4=="x")
            {
                ui->label_5->setText(QString::number(ui->label_4->text().toInt()+1));
            }
            else
            {
                ui->label_4->setText(QString::number(ui->label_5->text().toInt()+1));
            }
        }
    }
    //c1 c2 c3
    //c4 c5 c6
    //-- -- --
    else if(c7==c8 && c7==c9 && c8==c9)
    {
        if(c7 != "")
        {
            game = false;
            if(c7=="x")
            {
                ui->label_5->setText(QString::number(ui->label_4->text().toInt()+1));
            }
            else
            {
                ui->label_4->setText(QString::number(ui->label_5->text().toInt()+1));
            }
        }
    }
    //-- c2 c3
    //-- c5 c6
    //-- c8 c9
    else if(c1==c4 && c1==c7 && c7==c4)
    {
        if(c1 != "")
        {
            game = false;
            if(c1=="x")
            {
                ui->label_5->setText(QString::number(ui->label_4->text().toInt()+1));
            }
            else
            {
                ui->label_4->setText(QString::number(ui->label_5->text().toInt()+1));
            }
        }
    }
    //c1 -- c3
    //c4 -- c6
    //c7 -- c9
    else if(c2==c5 && c2==c8 && c8==c5)
    {
        if(c2 != "")
        {
            game = false;
            if(c2=="x")
            {
                ui->label_5->setText(QString::number(ui->label_4->text().toInt()+1));
            }
            else
            {
                ui->label_4->setText(QString::number(ui->label_5->text().toInt()+1));
            }
        }
    }
    //c1 c2 --
    //c4 c5 --
    //c7 c8 --
    else if(c3==c6 && c3==c9 && c6==c9)
    {
        if(c3 != "")
        {
            game = false;
            if(c3=="x")
            {
                ui->label_5->setText(QString::number(ui->label_4->text().toInt()+1));
            }
            else
            {
                ui->label_4->setText(QString::number(ui->label_5->text().toInt()+1));
            }
        }
    }
    //-- c2 c3
    //c4 -- c6
    //c7 c8 --
    else if(c1==c4 && c1==c9 && c9==c4)
    {
        if(c1 != "")
        {
            game = false;
            if(c1=="x")
            {
                ui->label_5->setText(QString::number(ui->label_4->text().toInt()+1));
            }
            else
            {
                ui->label_4->setText(QString::number(ui->label_5->text().toInt()+1));
            }
        }
    }
    //c1 c2 --
    //c4 -- c6
    //-- c8 c9
    else if(c3==c5 && c3==c7 && c5==c7)
    {
        if(c3 != "")
        {
            game = false;
            if(c3=="x")
            {
                ui->label_5->setText(QString::number(ui->label_4->text().toInt()+1));
            }
            else
            {
                ui->label_4->setText(QString::number(ui->label_5->text().toInt()+1));
            }
        }
    }
}

