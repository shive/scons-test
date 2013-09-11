// -*- coding: utf-8-with-signature-dos -*-
//======================================================================================================================

#include "stdafx.h"

int main(int argc, const char** argv) {
#ifdef _DEBUG
    ::printf("hoge hoge hoge.\n");
#else
    ::printf("HOGE HOGE HOGE.\n");
#endif
    return 0;
}

