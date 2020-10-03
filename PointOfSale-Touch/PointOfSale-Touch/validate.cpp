#include "validate.h"

Validate::Validate(QList<QChar> kpadInput)
{
    keypadInput = kpadInput;
}

bool Validate::validate_keypad_input()
{
    if(keypadInput.size() == 5){
        QString one = keypadInput.takeFirst(), two = keypadInput.takeFirst(),\
                three = keypadInput.takeFirst(), four = keypadInput.takeFirst(),\
                five = keypadInput.takeFirst(), combined = one+two+three+four+five;
        if(m_hash == sha256(combined.toStdString())){
            QMessageBox msg;
            //msg.setText(QString::fromStdString(sha256(combined.toStdString())));
            msg.setText("Successfully logged in");
            msg.exec();
            return true;
        }
        return false;
    }
    return false;
}
