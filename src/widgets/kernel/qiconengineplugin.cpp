/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the QtGui module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qiconengineplugin.h"
#include "qiconengine.h"

QT_BEGIN_NAMESPACE

/*!
    \class QIconEnginePlugin
    \brief The QIconEnginePlugin class provides an abstract base for custom QIconEngine plugins.

    \ingroup plugins
    \inmodule QtWidgets

    \b {Use QIconEnginePluginV2 instead.}

    The icon engine plugin is a simple plugin interface that makes it easy to
    create custom icon engines that can be loaded dynamically into applications
    through QIcon. QIcon uses the file or resource name's suffix to determine
    what icon engine to use.

    Writing a icon engine plugin is achieved by subclassing this base class,
    reimplementing the pure virtual functions keys() and create(), and
    exporting the class with the Q_EXPORT_PLUGIN2() macro.

    \sa {How to Create Qt Plugins}
*/

/*!
    \fn QStringList QIconEnginePlugin::keys() const

    Returns a list of icon engine keys that this plugin supports. The keys correspond
    to the suffix of the file or resource name used when the plugin was created.
    Keys are case insensitive.

    \sa create()
*/

/*!
    \fn QIconEngine* QIconEnginePlugin::create(const QString& filename)

    Creates and returns a QIconEngine object for the icon with the given
    \a filename.

    \sa keys()
*/

/*!
    Constructs a icon engine plugin with the given \a parent. This is invoked
    automatically by the Q_EXPORT_PLUGIN2() macro.
*/
QIconEnginePlugin::QIconEnginePlugin(QObject *parent)
    : QObject(parent)
{
}

/*!
    Destroys the icon engine plugin.

    You never have to call this explicitly. Qt destroys a plugin
    automatically when it is no longer used.
*/
QIconEnginePlugin::~QIconEnginePlugin()
{
}


QT_END_NAMESPACE
