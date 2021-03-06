/*
* Generated by SGWrapperGen - DO NOT EDIT!
*
* SwinGame wrapper for C - Text
*
* Wrapping sgText.pas
*/

#include "SGSDK.h"
#include "Text.h"

#include "Types.h"

#ifdef __cplusplus

void draw_framerate(int32_t x, int32_t y)
{
    sg_Text_DrawFramerateWithSimpleFont(x, y);
}

#endif

void draw_framerate_with_simple_font(int32_t x, int32_t y)
{
    sg_Text_DrawFramerateWithSimpleFont(x, y);
}

void draw_framerate(int32_t x, int32_t y, font font)
{
    sg_Text_DrawFramerate(x, y, font);
}

#ifdef __cplusplus

void draw_framerate(int32_t x, int32_t y, const char *name)
{
    sg_Text_DrawFramerateFontNamed(x, y, name);
}

#endif

void draw_framerate_font_named(int32_t x, int32_t y, const char *name)
{
    sg_Text_DrawFramerateFontNamed(x, y, name);
}

#ifdef __cplusplus

void draw_framerate(int32_t x, int32_t y, const char *name, int32_t size)
{
    sg_Text_DrawFramerateFontNamedSize(x, y, name, size);
}

#endif

void draw_framerate_font_named_size(int32_t x, int32_t y, const char *name, int32_t size)
{
    sg_Text_DrawFramerateFontNamedSize(x, y, name, size);
}

#ifdef __cplusplus

void draw_text(const char *theText, color textColor, const point2d &pt)
{
    sg_Text_DrawSimpleTextPt(theText, textColor, &pt);
}

#endif

void draw_simple_text_pt(const char *theText, color textColor, const point2d *pt)
{
    sg_Text_DrawSimpleTextPt(theText, textColor, pt);
}

void draw_simple_text_pt_byval(const char *theText, color textColor, const point2d pt)
{
    sg_Text_DrawSimpleTextPt(theText, textColor, &pt);
}

#ifdef __cplusplus

void draw_text(const char *theText, color textColor, font theFont, const point2d &pt)
{
    sg_Text_DrawTextAtPoint(theText, textColor, theFont, &pt);
}

#endif

void draw_text_at_point(const char *theText, color textColor, font theFont, const point2d *pt)
{
    sg_Text_DrawTextAtPoint(theText, textColor, theFont, pt);
}

void draw_text_at_point_byval(const char *theText, color textColor, font theFont, const point2d pt)
{
    sg_Text_DrawTextAtPoint(theText, textColor, theFont, &pt);
}

#ifdef __cplusplus

void draw_text(const char *theText, color textColor, float x, float y)
{
    sg_Text_DrawSimpleText(theText, textColor, x, y);
}

#endif

void draw_simple_text(const char *theText, color textColor, float x, float y)
{
    sg_Text_DrawSimpleText(theText, textColor, x, y);
}

#ifdef __cplusplus

void draw_text(const char *theText, color textColor, const char *name, const point2d &pt)
{
    sg_Text_DrawTextAtPointWithFontNamed(theText, textColor, name, &pt);
}

#endif

void draw_text_at_point_with_font_named(const char *theText, color textColor, const char *name, const point2d *pt)
{
    sg_Text_DrawTextAtPointWithFontNamed(theText, textColor, name, pt);
}

void draw_text_at_point_with_font_named_byval(const char *theText, color textColor, const char *name, const point2d pt)
{
    sg_Text_DrawTextAtPointWithFontNamed(theText, textColor, name, &pt);
}

#ifdef __cplusplus

void draw_text(bitmap dest, const char *theText, color textColor, const char *name, const point2d &pt)
{
    sg_Text_DrawTextOnBitmapAtPointWithFontNamed(dest, theText, textColor, name, &pt);
}

#endif

void draw_text_on_bitmap_at_point_with_font_named(bitmap dest, const char *theText, color textColor, const char *name, const point2d *pt)
{
    sg_Text_DrawTextOnBitmapAtPointWithFontNamed(dest, theText, textColor, name, pt);
}

void draw_text_on_bitmap_at_point_with_font_named_byval(bitmap dest, const char *theText, color textColor, const char *name, const point2d pt)
{
    sg_Text_DrawTextOnBitmapAtPointWithFontNamed(dest, theText, textColor, name, &pt);
}

void draw_text(const char *theText, color textColor, font theFont, float x, float y)
{
    sg_Text_DrawText(theText, textColor, theFont, x, y);
}

#ifdef __cplusplus

void draw_text(const char *theText, color textColor, const char *name, float x, float y)
{
    sg_Text_DrawTextWithFontNamed(theText, textColor, name, x, y);
}

#endif

void draw_text_with_font_named(const char *theText, color textColor, const char *name, float x, float y)
{
    sg_Text_DrawTextWithFontNamed(theText, textColor, name, x, y);
}

#ifdef __cplusplus

void draw_text(bitmap dest, const char *theText, color textColor, float x, float y)
{
    sg_Text_DrawSimpleTextOnBitmap(dest, theText, textColor, x, y);
}

#endif

void draw_simple_text_on_bitmap(bitmap dest, const char *theText, color textColor, float x, float y)
{
    sg_Text_DrawSimpleTextOnBitmap(dest, theText, textColor, x, y);
}

#ifdef __cplusplus

void draw_text(bitmap dest, const char *theText, color textColor, font theFont, const point2d &pt)
{
    sg_Text_DrawTextOnBitmapAtPoint(dest, theText, textColor, theFont, &pt);
}

#endif

void draw_text_on_bitmap_at_point(bitmap dest, const char *theText, color textColor, font theFont, const point2d *pt)
{
    sg_Text_DrawTextOnBitmapAtPoint(dest, theText, textColor, theFont, pt);
}

void draw_text_on_bitmap_at_point_byval(bitmap dest, const char *theText, color textColor, font theFont, const point2d pt)
{
    sg_Text_DrawTextOnBitmapAtPoint(dest, theText, textColor, theFont, &pt);
}

#ifdef __cplusplus

void draw_text(const char *theText, color textColor, const char *name, int32_t size, const point2d &pt)
{
    sg_Text_DrawTextAtPointWithFontNamedAndSize(theText, textColor, name, size, &pt);
}

#endif

void draw_text_at_point_with_font_named_and_size(const char *theText, color textColor, const char *name, int32_t size, const point2d *pt)
{
    sg_Text_DrawTextAtPointWithFontNamedAndSize(theText, textColor, name, size, pt);
}

void draw_text_at_point_with_font_named_and_size_byval(const char *theText, color textColor, const char *name, int32_t size, const point2d pt)
{
    sg_Text_DrawTextAtPointWithFontNamedAndSize(theText, textColor, name, size, &pt);
}

#ifdef __cplusplus

void draw_text(bitmap dest, const char *theText, color textColor, const char *name, int32_t size, const point2d &pt)
{
    sg_Text_DrawTextOnBitmapAtPointWithFontNamedAndSize(dest, theText, textColor, name, size, &pt);
}

#endif

void draw_text_on_bitmap_at_point_with_font_named_and_size(bitmap dest, const char *theText, color textColor, const char *name, int32_t size, const point2d *pt)
{
    sg_Text_DrawTextOnBitmapAtPointWithFontNamedAndSize(dest, theText, textColor, name, size, pt);
}

void draw_text_on_bitmap_at_point_with_font_named_and_size_byval(bitmap dest, const char *theText, color textColor, const char *name, int32_t size, const point2d pt)
{
    sg_Text_DrawTextOnBitmapAtPointWithFontNamedAndSize(dest, theText, textColor, name, size, &pt);
}

#ifdef __cplusplus

void draw_text(const char *theText, color textColor, const char *name, int32_t size, float x, float y)
{
    sg_Text_DrawTextWithFontNamedSize(theText, textColor, name, size, x, y);
}

#endif

void draw_text_with_font_named_size(const char *theText, color textColor, const char *name, int32_t size, float x, float y)
{
    sg_Text_DrawTextWithFontNamedSize(theText, textColor, name, size, x, y);
}

#ifdef __cplusplus

void draw_text(bitmap dest, const char *theText, color textColor, font theFont, int32_t x, int32_t y)
{
    sg_Text_DrawTextOnBitmap(dest, theText, textColor, theFont, x, y);
}

#endif

void draw_text_on_bitmap(bitmap dest, const char *theText, color textColor, font theFont, int32_t x, int32_t y)
{
    sg_Text_DrawTextOnBitmap(dest, theText, textColor, theFont, x, y);
}

#ifdef __cplusplus

void draw_text(bitmap dest, const char *theText, color textColor, const char *name, int32_t x, int32_t y)
{
    sg_Text_DrawTextOnBitmapWithFontNamed(dest, theText, textColor, name, x, y);
}

#endif

void draw_text_on_bitmap_with_font_named(bitmap dest, const char *theText, color textColor, const char *name, int32_t x, int32_t y)
{
    sg_Text_DrawTextOnBitmapWithFontNamed(dest, theText, textColor, name, x, y);
}

#ifdef __cplusplus

void draw_text(bitmap dest, const char *theText, color textColor, const char *name, int32_t size, int32_t x, int32_t y)
{
    sg_Text_DrawTextOnBitmapWithFontNamedAndSize(dest, theText, textColor, name, size, x, y);
}

#endif

void draw_text_on_bitmap_with_font_named_and_size(bitmap dest, const char *theText, color textColor, const char *name, int32_t size, int32_t x, int32_t y)
{
    sg_Text_DrawTextOnBitmapWithFontNamedAndSize(dest, theText, textColor, name, size, x, y);
}

#ifdef __cplusplus

void draw_text_lines(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, float x, float y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLinesWithFontNamedAndSize(theText, textColor, backColor, name, size, align, x, y, w, h);
}

#endif

void draw_text_lines_with_font_named_and_size(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, float x, float y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLinesWithFontNamedAndSize(theText, textColor, backColor, name, size, align, x, y, w, h);
}

#ifdef __cplusplus

void draw_text_lines(bitmap dest, const char *theText, color textColor, color backColor, const char *name, font_alignment align, int32_t x, int32_t y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLinesOnBitmapWithFontNamed(dest, theText, textColor, backColor, name, align, x, y, w, h);
}

#endif

void draw_text_lines_on_bitmap_with_font_named(bitmap dest, const char *theText, color textColor, color backColor, const char *name, font_alignment align, int32_t x, int32_t y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLinesOnBitmapWithFontNamed(dest, theText, textColor, backColor, name, align, x, y, w, h);
}

#ifdef __cplusplus

void draw_text_lines(bitmap dest, const char *theText, color textColor, color backColor, font theFont, font_alignment align, int32_t x, int32_t y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLinesOnBitmap(dest, theText, textColor, backColor, theFont, align, x, y, w, h);
}

#endif

void draw_text_lines_on_bitmap(bitmap dest, const char *theText, color textColor, color backColor, font theFont, font_alignment align, int32_t x, int32_t y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLinesOnBitmap(dest, theText, textColor, backColor, theFont, align, x, y, w, h);
}

#ifdef __cplusplus

void draw_text_lines(bitmap dest, const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, int32_t x, int32_t y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLinesOnBitmapWithFontNamedAndSize(dest, theText, textColor, backColor, name, size, align, x, y, w, h);
}

#endif

void draw_text_lines_on_bitmap_with_font_named_and_size(bitmap dest, const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, int32_t x, int32_t y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLinesOnBitmapWithFontNamedAndSize(dest, theText, textColor, backColor, name, size, align, x, y, w, h);
}

#ifdef __cplusplus

void draw_text_lines(const char *theText, color textColor, color backColor, const char *name, font_alignment align, const rectangle &withinRect)
{
    sg_Text_DrawTextLinesInRectWithFontNamed(theText, textColor, backColor, name, align, &withinRect);
}

#endif

void draw_text_lines_in_rect_with_font_named(const char *theText, color textColor, color backColor, const char *name, font_alignment align, const rectangle *withinRect)
{
    sg_Text_DrawTextLinesInRectWithFontNamed(theText, textColor, backColor, name, align, withinRect);
}

void draw_text_lines_in_rect_with_font_named_byval(const char *theText, color textColor, color backColor, const char *name, font_alignment align, const rectangle withinRect)
{
    sg_Text_DrawTextLinesInRectWithFontNamed(theText, textColor, backColor, name, align, &withinRect);
}

#ifdef __cplusplus

void draw_text_lines(const char *theText, color textColor, color backColor, font theFont, font_alignment align, const rectangle &withinRect)
{
    sg_Text_DrawTextLinesInRect(theText, textColor, backColor, theFont, align, &withinRect);
}

#endif

void draw_text_lines_in_rect(const char *theText, color textColor, color backColor, font theFont, font_alignment align, const rectangle *withinRect)
{
    sg_Text_DrawTextLinesInRect(theText, textColor, backColor, theFont, align, withinRect);
}

void draw_text_lines_in_rect_byval(const char *theText, color textColor, color backColor, font theFont, font_alignment align, const rectangle withinRect)
{
    sg_Text_DrawTextLinesInRect(theText, textColor, backColor, theFont, align, &withinRect);
}

#ifdef __cplusplus

void draw_text_lines(bitmap dest, const char *theText, color textColor, color backColor, font theFont, font_alignment align, const rectangle &withinRect)
{
    sg_Text_DrawTextLinesInRectOnBitmap(dest, theText, textColor, backColor, theFont, align, &withinRect);
}

#endif

void draw_text_lines_in_rect_on_bitmap(bitmap dest, const char *theText, color textColor, color backColor, font theFont, font_alignment align, const rectangle *withinRect)
{
    sg_Text_DrawTextLinesInRectOnBitmap(dest, theText, textColor, backColor, theFont, align, withinRect);
}

void draw_text_lines_in_rect_on_bitmap_byval(bitmap dest, const char *theText, color textColor, color backColor, font theFont, font_alignment align, const rectangle withinRect)
{
    sg_Text_DrawTextLinesInRectOnBitmap(dest, theText, textColor, backColor, theFont, align, &withinRect);
}

#ifdef __cplusplus

void draw_text_lines(bitmap dest, const char *theText, color textColor, color backColor, const char *name, font_alignment align, const rectangle &withinRect)
{
    sg_Text_DrawTextLinesInRectOnBitmapWithFontNamed(dest, theText, textColor, backColor, name, align, &withinRect);
}

#endif

void draw_text_lines_in_rect_on_bitmap_with_font_named(bitmap dest, const char *theText, color textColor, color backColor, const char *name, font_alignment align, const rectangle *withinRect)
{
    sg_Text_DrawTextLinesInRectOnBitmapWithFontNamed(dest, theText, textColor, backColor, name, align, withinRect);
}

void draw_text_lines_in_rect_on_bitmap_with_font_named_byval(bitmap dest, const char *theText, color textColor, color backColor, const char *name, font_alignment align, const rectangle withinRect)
{
    sg_Text_DrawTextLinesInRectOnBitmapWithFontNamed(dest, theText, textColor, backColor, name, align, &withinRect);
}

#ifdef __cplusplus

void draw_text_lines(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, const rectangle &withinRect)
{
    sg_Text_DrawTextLinesInRectWithFontNamedAndSize(theText, textColor, backColor, name, size, align, &withinRect);
}

#endif

void draw_text_lines_in_rect_with_font_named_and_size(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, const rectangle *withinRect)
{
    sg_Text_DrawTextLinesInRectWithFontNamedAndSize(theText, textColor, backColor, name, size, align, withinRect);
}

void draw_text_lines_in_rect_with_font_named_and_size_byval(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, const rectangle withinRect)
{
    sg_Text_DrawTextLinesInRectWithFontNamedAndSize(theText, textColor, backColor, name, size, align, &withinRect);
}

#ifdef __cplusplus

void draw_text_lines(bitmap dest, const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, const rectangle &withinRect)
{
    sg_Text_DrawTextLinesInRectOnBitmapWithFontNamedAndSize(dest, theText, textColor, backColor, name, size, align, &withinRect);
}

#endif

void draw_text_lines_in_rect_on_bitmap_with_font_named_and_size(bitmap dest, const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, const rectangle *withinRect)
{
    sg_Text_DrawTextLinesInRectOnBitmapWithFontNamedAndSize(dest, theText, textColor, backColor, name, size, align, withinRect);
}

void draw_text_lines_in_rect_on_bitmap_with_font_named_and_size_byval(bitmap dest, const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, const rectangle withinRect)
{
    sg_Text_DrawTextLinesInRectOnBitmapWithFontNamedAndSize(dest, theText, textColor, backColor, name, size, align, &withinRect);
}

void draw_text_lines(const char *theText, color textColor, color backColor, font theFont, font_alignment align, float x, float y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLines(theText, textColor, backColor, theFont, align, x, y, w, h);
}

#ifdef __cplusplus

void draw_text_lines(const char *theText, color textColor, color backColor, const char *name, font_alignment align, float x, float y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLinesWithFontNamed(theText, textColor, backColor, name, align, x, y, w, h);
}

#endif

void draw_text_lines_with_font_named(const char *theText, color textColor, color backColor, const char *name, font_alignment align, float x, float y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLinesWithFontNamed(theText, textColor, backColor, name, align, x, y, w, h);
}

#ifdef __cplusplus

void draw_text_lines_on_screen(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, int32_t x, int32_t y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLinesOnScreenWithFontNamedWithSize(theText, textColor, backColor, name, size, align, x, y, w, h);
}

#endif

void draw_text_lines_on_screen_with_font_named_with_size(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, int32_t x, int32_t y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLinesOnScreenWithFontNamedWithSize(theText, textColor, backColor, name, size, align, x, y, w, h);
}

#ifdef __cplusplus

void draw_text_lines_on_screen(const char *theText, color textColor, color backColor, font theFont, font_alignment align, const rectangle &withinRect)
{
    sg_Text_DrawTextLinesInRectOnScreen(theText, textColor, backColor, theFont, align, &withinRect);
}

#endif

void draw_text_lines_in_rect_on_screen(const char *theText, color textColor, color backColor, font theFont, font_alignment align, const rectangle *withinRect)
{
    sg_Text_DrawTextLinesInRectOnScreen(theText, textColor, backColor, theFont, align, withinRect);
}

void draw_text_lines_in_rect_on_screen_byval(const char *theText, color textColor, color backColor, font theFont, font_alignment align, const rectangle withinRect)
{
    sg_Text_DrawTextLinesInRectOnScreen(theText, textColor, backColor, theFont, align, &withinRect);
}

#ifdef __cplusplus

void draw_text_lines_on_screen(const char *theText, color textColor, color backColor, const char *name, font_alignment align, const rectangle &withinRect)
{
    sg_Text_DrawTextLinesInRectOnScreenWithFontNamed(theText, textColor, backColor, name, align, &withinRect);
}

#endif

void draw_text_lines_in_rect_on_screen_with_font_named(const char *theText, color textColor, color backColor, const char *name, font_alignment align, const rectangle *withinRect)
{
    sg_Text_DrawTextLinesInRectOnScreenWithFontNamed(theText, textColor, backColor, name, align, withinRect);
}

void draw_text_lines_in_rect_on_screen_with_font_named_byval(const char *theText, color textColor, color backColor, const char *name, font_alignment align, const rectangle withinRect)
{
    sg_Text_DrawTextLinesInRectOnScreenWithFontNamed(theText, textColor, backColor, name, align, &withinRect);
}

#ifdef __cplusplus

void draw_text_lines_on_screen(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, const rectangle &withinRect)
{
    sg_Text_DrawTextLinesInRectOnScreenWithFontNamedAndSize(theText, textColor, backColor, name, size, align, &withinRect);
}

#endif

void draw_text_lines_in_rect_on_screen_with_font_named_and_size(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, const rectangle *withinRect)
{
    sg_Text_DrawTextLinesInRectOnScreenWithFontNamedAndSize(theText, textColor, backColor, name, size, align, withinRect);
}

void draw_text_lines_in_rect_on_screen_with_font_named_and_size_byval(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, const rectangle withinRect)
{
    sg_Text_DrawTextLinesInRectOnScreenWithFontNamedAndSize(theText, textColor, backColor, name, size, align, &withinRect);
}

void draw_text_lines_on_screen(const char *theText, color textColor, color backColor, font theFont, font_alignment align, int32_t x, int32_t y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLinesOnScreen(theText, textColor, backColor, theFont, align, x, y, w, h);
}

#ifdef __cplusplus

void draw_text_lines_on_screen(const char *theText, color textColor, color backColor, const char *name, font_alignment align, int32_t x, int32_t y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLinesOnScreenWithFontNamed(theText, textColor, backColor, name, align, x, y, w, h);
}

#endif

void draw_text_lines_on_screen_with_font_named(const char *theText, color textColor, color backColor, const char *name, font_alignment align, int32_t x, int32_t y, int32_t w, int32_t h)
{
    sg_Text_DrawTextLinesOnScreenWithFontNamed(theText, textColor, backColor, name, align, x, y, w, h);
}

#ifdef __cplusplus

void draw_text_on_screen(const char *theText, color textColor, float x, float y)
{
    sg_Text_DrawSimpleTextOnScreen(theText, textColor, x, y);
}

#endif

void draw_simple_text_on_screen(const char *theText, color textColor, float x, float y)
{
    sg_Text_DrawSimpleTextOnScreen(theText, textColor, x, y);
}

#ifdef __cplusplus

void draw_text_on_screen(const char *theText, color textColor, const char *name, const point2d &pt)
{
    sg_Text_DrawTextOnScreenAtPointWithFontNamed(theText, textColor, name, &pt);
}

#endif

void draw_text_on_screen_at_point_with_font_named(const char *theText, color textColor, const char *name, const point2d *pt)
{
    sg_Text_DrawTextOnScreenAtPointWithFontNamed(theText, textColor, name, pt);
}

void draw_text_on_screen_at_point_with_font_named_byval(const char *theText, color textColor, const char *name, const point2d pt)
{
    sg_Text_DrawTextOnScreenAtPointWithFontNamed(theText, textColor, name, &pt);
}

#ifdef __cplusplus

void draw_text_on_screen(const char *theText, color textColor, font theFont, const point2d &pt)
{
    sg_Text_DrawTextOnScreenAtPoint(theText, textColor, theFont, &pt);
}

#endif

void draw_text_on_screen_at_point(const char *theText, color textColor, font theFont, const point2d *pt)
{
    sg_Text_DrawTextOnScreenAtPoint(theText, textColor, theFont, pt);
}

void draw_text_on_screen_at_point_byval(const char *theText, color textColor, font theFont, const point2d pt)
{
    sg_Text_DrawTextOnScreenAtPoint(theText, textColor, theFont, &pt);
}

void draw_text_on_screen(const char *theText, color textColor, font theFont, int32_t x, int32_t y)
{
    sg_Text_DrawTextOnScreen(theText, textColor, theFont, x, y);
}

#ifdef __cplusplus

void draw_text_on_screen(const char *theText, color textColor, const char *name, int32_t x, int32_t y)
{
    sg_Text_DrawTextOnScreenWithFontNamed(theText, textColor, name, x, y);
}

#endif

void draw_text_on_screen_with_font_named(const char *theText, color textColor, const char *name, int32_t x, int32_t y)
{
    sg_Text_DrawTextOnScreenWithFontNamed(theText, textColor, name, x, y);
}

#ifdef __cplusplus

void draw_text_on_screen(const char *theText, color textColor, const char *name, int32_t size, const point2d &pt)
{
    sg_Text_DrawTextOnScreenAtPointWithFontNamedAndSize(theText, textColor, name, size, &pt);
}

#endif

void draw_text_on_screen_at_point_with_font_named_and_size(const char *theText, color textColor, const char *name, int32_t size, const point2d *pt)
{
    sg_Text_DrawTextOnScreenAtPointWithFontNamedAndSize(theText, textColor, name, size, pt);
}

void draw_text_on_screen_at_point_with_font_named_and_size_byval(const char *theText, color textColor, const char *name, int32_t size, const point2d pt)
{
    sg_Text_DrawTextOnScreenAtPointWithFontNamedAndSize(theText, textColor, name, size, &pt);
}

#ifdef __cplusplus

void draw_text_on_screen(const char *theText, color textColor, const char *name, int32_t size, int32_t x, int32_t y)
{
    sg_Text_DrawTextOnScreenWithFontNamedAndSize(theText, textColor, name, size, x, y);
}

#endif

void draw_text_on_screen_with_font_named_and_size(const char *theText, color textColor, const char *name, int32_t size, int32_t x, int32_t y)
{
    sg_Text_DrawTextOnScreenWithFontNamedAndSize(theText, textColor, name, size, x, y);
}

#ifdef __cplusplus

bitmap draw_text_to(font font, const char *str, color clrFg, color backgroundColor)
{
    return sg_Text_DrawTextToBitmapAtPointWithFontNamedAndSize(font, str, clrFg, backgroundColor);
}

#endif

bitmap draw_text_to_bitmap_at_point_with_font_named_and_size(font font, const char *str, color clrFg, color backgroundColor)
{
    return sg_Text_DrawTextToBitmapAtPointWithFontNamedAndSize(font, str, clrFg, backgroundColor);
}

font_style font_font_style(font font)
{
    return sg_Text_FontFontStyle(font);
}

void font_name_for(const char *fontName, int32_t size, char *result)
{
    sg_Text_FontNameFor(fontName, size, result);
}

font font_named(const char *name)
{
    return sg_Text_FontNamed(name);
}

#ifdef __cplusplus

font font_named(const char *name, int32_t size)
{
    return sg_Text_FontNamedWithSize(name, size);
}

#endif

font font_named_with_size(const char *name, int32_t size)
{
    return sg_Text_FontNamedWithSize(name, size);
}

void font_set_style(font font, font_style value)
{
    sg_Text_FontSetStyle(font, value);
}

#ifdef __cplusplus

void free_font(font &fontToFree)
{
    sg_Text_FreeFont(&fontToFree);
}

#endif

void free_font(font *fontToFree)
{
    sg_Text_FreeFont(fontToFree);
}

bool has_font(const char *name)
{
    return sg_Text_HasFont(name) != 0;
}

font load_font(const char *fontName, int32_t size)
{
    return sg_Text_LoadFont(fontName, size);
}

font load_font_named(const char *name, const char *filename, int32_t size)
{
    return sg_Text_LoadFontNamed(name, filename, size);
}

void release_all_fonts()
{
    sg_Text_ReleaseAllFonts();
}

void release_font(const char *name)
{
    sg_Text_ReleaseFont(name);
}

font_alignment text_alignment_from(const char *str)
{
    return sg_Text_TextAlignmentFrom(str);
}

int32_t text_height(font theFont, const char *theText)
{
    return sg_Text_TextHeight(theFont, theText);
}

int32_t text_width(font theFont, const char *theText)
{
    return sg_Text_TextWidth(theFont, theText);
}

