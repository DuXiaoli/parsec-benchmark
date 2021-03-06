/* $XFree86: xc/lib/GL/mesa/src/drv/ffb/ffb_tex.c,v 1.1 2002/02/22 21:32:59 dawes Exp $
 *
 * GLX Hardware Device Driver for Sun Creator/Creator3D
 * Copyright (C) 2001 David S. Miller
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * DAVID MILLER, OR ANY OTHER CONTRIBUTORS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
 * OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 *
 *    David S. Miller <davem@redhat.com>
 */

#include "glheader.h"
#include "mtypes.h"
#include "ffb_tex.h"

/* No texture unit, all software. */
/* XXX this function isn't needed since _mesa_init_driver_functions()
 * will make all these assignments.
 */
void ffbDDInitTexFuncs(GLcontext *ctx)
{
        /*
	ctx->Driver.ChooseTextureFormat = _mesa_choose_tex_format;
	ctx->Driver.TexImage1D = _mesa_store_teximage1d;
	ctx->Driver.TexImage2D = _mesa_store_teximage2d;
	ctx->Driver.TexImage3D = _mesa_store_teximage3d;
	ctx->Driver.TexSubImage1D = _mesa_store_texsubimage1d;
	ctx->Driver.TexSubImage2D = _mesa_store_texsubimage2d;
	ctx->Driver.TexSubImage3D = _mesa_store_texsubimage3d;
	ctx->Driver.CopyTexImage1D = _swrast_copy_teximage1d;
	ctx->Driver.CopyTexImage2D = _swrast_copy_teximage2d;
	ctx->Driver.CopyTexSubImage1D = _swrast_copy_texsubimage1d;
	ctx->Driver.CopyTexSubImage2D = _swrast_copy_texsubimage2d;
	ctx->Driver.CopyTexSubImage3D = _swrast_copy_texsubimage3d;
	ctx->Driver.TestProxyTexImage = _mesa_test_proxy_teximage;
	*/
}
