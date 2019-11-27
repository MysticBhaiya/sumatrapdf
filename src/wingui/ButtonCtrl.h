/* Copyright 2019 the SumatraPDF project authors (see AUTHORS file).
   License: Simplified BSD (see COPYING.BSD) */

typedef std::function<void()> OnClicked;

struct ButtonCtrl : public WindowBase {
    OnClicked OnClicked = nullptr;

    ButtonCtrl(HWND parent);
    ~ButtonCtrl() override;
    bool Create() override;
    LRESULT WndProcParent(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp) override;

    SIZE GetIdealSize() override;
};

ILayout* NewButtonLayout(ButtonCtrl* b);

bool IsButton(Kind);
bool IsButton(ILayout*);
