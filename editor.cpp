#include "editor.h"
#include <FL/Fl.H>
#include <FL/fl_ask.H>

//we will get back to this project soon
//abandon?

EditorWindow::EditorWindow(int w, int h, const char* title) : Fl_Double_Window(w, h, title) {
    // Menu bar
    Fl_Menu_Item menuitems[] = {
        { "&File", 0, 0, 0, FL_SUBMENU },
        { "&New", FL_CTRL + 'n', (Fl_Callback *)new_cb },
        { "&Open", FL_CTRL + 'o', (Fl_Callback *)open_cb },
        { "&Save", FL_CTRL + 's', (Fl_Callback *)save_cb },
        { 0 },
    };
    Fl_Menu_Bar *menubar = new Fl_Menu_Bar(0, 0, 640, 30);
    menubar->copy(menuitems);

    // Text editor
    textbuf = new Fl_Text_Buffer();
    editor = new Fl_Text_Editor(0, 30, 640, 480);
    editor->buffer(textbuf);
    editor->textfont(FL_COURIER);

    end();
}

EditorWindow::~EditorWindow() {
    delete textbuf;
}

int main(int argc, char **argv) {
    EditorWindow *window = new EditorWindow(640, 480, "FLTK Text Editor");
    window->show(argc, argv);
    return Fl::run();
}
