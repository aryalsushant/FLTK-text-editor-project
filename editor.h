#ifndef EDITOR_H
#define EDITOR_H

#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Text_Editor.H>
#include <FL/Fl_Menu_Bar.H>

class EditorWindow : public Fl_Double_Window {
public:
    EditorWindow(int w, int h, const char* title);
    ~EditorWindow();

    Fl_Text_Editor *editor;
    Fl_Text_Buffer *textbuf;

    // Callback declarations
    static void new_cb(Fl_Widget*, void*);
    static void open_cb(Fl_Widget*, void*);
    static void save_cb(Fl_Widget*, void*);
};

#endif
