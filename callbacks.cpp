#include "editor.h"
#include <FL/fl_ask.H>
#include <FL/Fl_File_Chooser.H>

void EditorWindow::new_cb(Fl_Widget*, void* v) {
    EditorWindow* e = (EditorWindow*)v;
    e->textbuf->select(0, e->textbuf->length());
    e->textbuf->remove_selection();
}

void EditorWindow::open_cb(Fl_Widget*, void* v) {
    EditorWindow* e = (EditorWindow*)v;
    char *newfile = fl_file_chooser("Open File?", "*", "");
    if (newfile) e->textbuf->loadfile(newfile);
}

void EditorWindow::save_cb(Fl_Widget*, void* v) {
    EditorWindow* e = (EditorWindow*)v;
    char *savefile = fl_file_chooser("Save File As?", "*", "");
    if (savefile) e->textbuf->savefile(savefile);
}
