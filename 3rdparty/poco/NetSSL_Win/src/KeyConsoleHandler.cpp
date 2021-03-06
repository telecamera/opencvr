//
// KeyConsoleHandler.cpp
//
// $Id$
//
// Library: NetSSL_Win
// Package: SSLCore
// Module:  KeyConsoleHandler
//
// Copyright (c) 2006-2014, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#include "Poco/Net/KeyConsoleHandler.h"
#include <iostream>


namespace Poco {
namespace Net {


KeyConsoleHandler::KeyConsoleHandler(bool server):PrivateKeyPassphraseHandler(server)
{
}


KeyConsoleHandler::~KeyConsoleHandler()
{
}


void KeyConsoleHandler::onPrivateKeyRequested(const void* pSender, std::string& privateKey)
{
	std::cout << "Please enter the passphrase for the private key: ";
	std::cin >> privateKey;
}


} } // namespace Poco::Net
