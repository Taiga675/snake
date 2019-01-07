#ifndef __SNAKE_H__
#define __SNAKE_H__

#include "winsys.h"
#include "cpoint.h"
#include "screen.h"
#include <vector>
#include <time.h>
#include <stdlib.h>

class CSnake:public CFramedWindow
{
public:
  CSnake(CRect r, char _c = ' ');

};

#endif
