/*
    Pacman Log Viewer
    Copyright (C) 2012-2019 Giuseppe Calà <jiveaxe@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef ACTIONCOLUMNDELEGATE_H
#define ACTIONCOLUMNDELEGATE_H

#include <QItemDelegate>

class ActionColumnDelegate : public QItemDelegate
{
    Q_OBJECT
public:
    explicit ActionColumnDelegate(QObject *parent = 0);

    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const;
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    
signals:
    
public slots:
    
};

#endif // ACTIONCOLUMNDELEGATE_H
