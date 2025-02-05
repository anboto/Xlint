// SPDX-License-Identifier: Apache-2.0
// Copyright 2021 - 2024, the Anboto author and contributors
#ifndef _xlnt_h_
#define _xlnt_h_

#include <plugin/Xlnt/include/xlnt/xlnt.hpp>
#include <Functions4U/Functions4U.h>

namespace Upp {

String GetCell(int col, int row);

void XlsxFill(xlnt::worksheet &ws, const Grid &g, bool removeEmpty);
	
}
	
#endif

