#include "Cube.h"

#include <QHBoxLayout>

Cube::Cube(QWidget *parent) : QWidget(parent)
{
    label = new QLabel();
    label->setText("");
    label->setAlignment(Qt::AlignCenter);
    QFont font = label->font();
    font.setPointSize(20);
    label->setFont(font);

    this->setFixedSize(75, 75);
    this->setStyleSheet("background-color: white; border-radius: 15px; border: 2px solid");

    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(label);
    setLayout(layout);
}

void Cube::setLetter(QString l)
{
    letter=l;
    label->setText(l);
}

QString Cube::getLetter()
{
    return this->letter;
}

void Cube::lightLetter(){
    label->setStyleSheet("background-color: yellow; border-radius: 15px; border: 2px solid");
}

void Cube::extinguishLetter()
{
    label->setStyleSheet("background-color: white; border-radius: 15px; border: 2px solid");
}
