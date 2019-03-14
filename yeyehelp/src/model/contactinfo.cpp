#include "contactinfo.h"

ContactInfo::ContactInfo()
{
this->setId(0);
    this->setCompany("Company");
    this->setEmail("name@domain.es");
    this->setLenguageId(1);
    this->setPhone("+34000000000");
    this->setCompanyFlag(false);
    this->setLenguageFlag(false);
    this->setPhoneFlag(false);
    this->setSmsFlag(false);
}


int ContactInfo::getId(void)
{
  return intId;
}

void ContactInfo::setId(int intNewId)
{
  intId=intNewId;
}


void ContactInfo::setLenguageId(int intNewLenguageId)
{
    intLenguageId = intNewLenguageId;

}

int ContactInfo::getLenguageId(void)
{
    return intLenguageId;

}

void ContactInfo::setCompany(QString qstrNewCompany)
{
    qstrCompany=qstrNewCompany;

}

QString ContactInfo::getCompany(void)
{
    return qstrCompany;

}

void ContactInfo::setEmail(QString qstrNewEmail)
{
    qstrEmail=qstrNewEmail;

}

QString ContactInfo::getEmail(void)
{
    return qstrEmail;

}

void ContactInfo::setPhoneTypeId(int intNewPhoneTypeId)
{
    intPhoneTypeId = intNewPhoneTypeId;
}

int ContactInfo::getPhoneTypeId(void)
{
    return intPhoneTypeId;
}

void ContactInfo::setPhone(QString qstrNewPhone)
{
    qstrPhone=qstrNewPhone;

}

QString ContactInfo::getPhone(void)
{
    return qstrPhone;

}

void ContactInfo::setLenguageFlag(bool blnNewLenguageFlag)
{
    blnLenguageFlag=blnNewLenguageFlag;
}

bool ContactInfo::getLenguageFlag(void)
{
    return blnLenguageFlag;
}

void ContactInfo::setCompanyFlag(bool blnNewCompanyFlag)
{
    blnCompanyFlag=blnNewCompanyFlag;
}
bool ContactInfo::getCompanyFlag(void)
{
    return blnCompanyFlag;
}

void ContactInfo::setPhoneFlag(bool blnNewPhoneFlag)
{
    blnPhoneFlag=blnNewPhoneFlag;
}
bool ContactInfo::getPhoneFlag(void)
{
    return blnPhoneFlag;
}

void ContactInfo::setSmsFlag(bool blnNewSmsFlag)
{
    blnSmsFlag=blnNewSmsFlag;
}

bool ContactInfo::getSmsFlag(void)
{
    return blnSmsFlag;
}
