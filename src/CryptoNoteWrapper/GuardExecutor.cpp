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

#include "GuardExecutor.h"

namespace WalletGui {

GuardExecutor::GuardExecutor(const std::function<void ()>& _initFunction, const std::function<void ()>& _deinitFunction) :
m_deinitFunction(_deinitFunction) {
  if (_initFunction != nullptr) {
    _initFunction();
  }
}

GuardExecutor::~GuardExecutor() {
  if (m_deinitFunction != nullptr) {
    m_deinitFunction();
  }
}

}
