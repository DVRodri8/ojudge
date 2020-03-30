/*********************************************************************
* Copyright (C) 2020 Miguel Revilla Rodríguez
*                    and the OJudge Platform project contributors
*
* This file is part of the OJudge Platform
*
* Read the LICENSE file for information on license terms
*********************************************************************/

#ifndef DASHBOARDWIDGET_H
#define DASHBOARDWIDGET_H

#include <Wt/WContainerWidget.h>
#include <Wt/Auth/Login.h>

class DashboardWidget : public Wt::WContainerWidget {
public:
DashboardWidget();
void login(Wt::Auth::Login& login);
void logout();

};

#endif // DASHBOARDWIDGET_H
