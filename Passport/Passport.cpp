﻿#include <iostream>
#include "p_classes.h"
int main()
{
    setlocale(LC_ALL, "rus");
    Passport p(2441, 12355677, 742554, "12.01.2001", "Александр", "Петухов", "Егорович", false, "03.01.1987", "Москва");
    

    ForeignPassport fp(2441, 12355677, 742554, "12.01.2001", "Александр", "Петухов", "Егорович", false, "03.01.1987", "Москва", 12345678, "туристическая, рабочая");
    fp.set_name("Максим");
    fp.f_info();
}

