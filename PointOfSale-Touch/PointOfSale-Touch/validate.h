#ifndef VALIDATE_H
#define VALIDATE_H
#include "mainwindow.h"
#include "sha256.h"

class Validate
{
public:
    Validate(QList<QChar> keypadInput);
    bool validate_keypad_input();
private:
    std::string m_hash = "b3786e141d65638ad8a98173e26b5f6a53c927737b23ff31fb1843937250f44b"; //80085
    QList<QChar> keypadInput;
};

#endif // VALIDATE_H
