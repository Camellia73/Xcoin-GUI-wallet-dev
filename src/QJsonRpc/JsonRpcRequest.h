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

#include <QJsonObject>
#include <QVariant>

#include "JsonRpcObject.h"

namespace QJsonRpc {

class JsonRpcRequest : public JsonRpcObject {
  Q_DISABLE_COPY(JsonRpcRequest)

public:
  JsonRpcRequest();
  explicit JsonRpcRequest(const QJsonObject& _jsonObject);
  virtual ~JsonRpcRequest();

  QString getId() const;
  QString getMethod() const;
  QVariantList getParamsAsArray() const;
  QVariantMap getParamsAsObject() const;

  void setId(const QString& _id);
  void setMethod(const QString& _method);
  void setParamsFromArray(const QVariantList& _variantList);
  void setParamsFromObject(const QVariantMap& _variantMap);
};

}
