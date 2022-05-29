/*
  This file is part of KDDockWidgets.

  SPDX-FileCopyrightText: 2019-2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Sérgio Martins <sergio.martins@kdab.com>

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/

#include "MainWindowMDI.h"
#include "controllers/MDILayout.h"

using namespace KDDockWidgets;
using namespace KDDockWidgets::Views;
using namespace KDDockWidgets::Controllers;

MainWindowMDI::MainWindowMDI(Controllers::MDILayout *layout)
    : m_mdiLayout(layout)
{
}

void MainWindowMDI::addDockWidget(DockWidget *dockWidget, QPoint localPos, InitialOption addingOption)
{
    m_mdiLayout->addDockWidget(dockWidget, localPos, addingOption);
}

void MainWindowMDI::addDockWidget(DockWidget *dockWidget, QPointF localPos, InitialOption addingOption)
{
    MainWindowMDI::addDockWidget(dockWidget, localPos.toPoint(), addingOption);
}
