/*********************************************************************
* Copyright (C) 2020 Miguel Revilla Rodríguez
*                    and the OJudge Platform project contributors
*
* This file is part of the OJudge Platform
*
* Read the LICENSE file for information on license terms
*********************************************************************/

#ifndef CONTESTSWIDGET_H
#define CONTESTSWIDGET_H

#include <Wt/WContainerWidget.h>
#include <Wt/Auth/Login.h>

class ContestsWidget : public Wt::WContainerWidget {
public:
ContestsWidget();
void login(Wt::Auth::Login& login);
void logout();

};

#endif // CONTESTSWIDGET_H
