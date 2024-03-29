// Copyright (c) 2015-2017, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Xcoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Xcoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Xcoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <QStyledItemDelegate>

namespace WalletGui {

class CopyColumnDelegate : public QStyledItemDelegate {
  Q_OBJECT
  Q_DISABLE_COPY(CopyColumnDelegate)

public:
  explicit CopyColumnDelegate(QObject* _parent);
  virtual ~CopyColumnDelegate();

  virtual void paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
  virtual QWidget* createEditor(QWidget* _parent, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
  virtual void updateEditorGeometry(QWidget* _editor, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
};

}
