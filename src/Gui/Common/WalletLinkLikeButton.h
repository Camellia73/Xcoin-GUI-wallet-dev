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

#include <QPushButton>

namespace WalletGui {

class WalletLinkLikeButton : public QPushButton {
  Q_OBJECT
  Q_DISABLE_COPY(WalletLinkLikeButton)

public:
  explicit WalletLinkLikeButton(QWidget* _parent);
  ~WalletLinkLikeButton();
};

class WalletTinyLinkLikeButton : public WalletLinkLikeButton {
  Q_OBJECT
  Q_DISABLE_COPY(WalletTinyLinkLikeButton)

public:
  explicit WalletTinyLinkLikeButton(QWidget* _parent);
  ~WalletTinyLinkLikeButton();
};

class WalletNormalLinkLikeButton : public WalletLinkLikeButton {
  Q_OBJECT
  Q_DISABLE_COPY(WalletNormalLinkLikeButton)

public:
  explicit WalletNormalLinkLikeButton(QWidget* _parent);
  ~WalletNormalLinkLikeButton();
};

}
