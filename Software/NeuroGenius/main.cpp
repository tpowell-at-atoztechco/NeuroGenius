#include <tchar.h>
#include <windows.h>

/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

/*  Make the class name into a global variable  */
TCHAR szClassName[ ] = _T("NeuroGeniusApp");

int WINAPI WinMain (HINSTANCE hThisInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpszArgument,
                     int nCmdShow)
{
    HWND hwnd;
    MSG messages;
    WNDCLASSEX wincl;
    HMENU hMenu, hSubMenuFile, hSubMenuEdit, hSubMenuData, hSubMenuProject, hSubMenuMRImaging, hSubMenuHelp;

    /* Create the menu */
    hMenu = CreateMenu();

    /* Add 'File' menu */
    hSubMenuFile = CreatePopupMenu();
    AppendMenu(hSubMenuFile, MF_STRING, 1, _T("Open..."));
    AppendMenu(hSubMenuFile, MF_STRING, 2, _T("Save"));
    AppendMenu(hSubMenuFile, MF_SEPARATOR, 0, NULL);
    AppendMenu(hSubMenuFile, MF_STRING, 3, _T("Exit"));
    AppendMenu(hMenu, MF_STRING | MF_POPUP, (UINT)hSubMenuFile, _T("File"));

    // Similarly, add the remaining menu and submenu items
    // Edit, Data, Project, MR Imaging, Help

    /* Register the window class, and if it fails quit the program */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;
    wincl.style = CS_DBLCLKS;
    wincl.cbSize = sizeof (WNDCLASSEX);
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;
    wincl.cbClsExtra = 0;
    wincl.cbWndExtra = 0;
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND;

    if (!RegisterClassEx (&wincl))
        return 0;

    hwnd = CreateWindowEx (
           0,
           szClassName,
           _T("NeuroGenius MR Image Acquisition & Development Project"),
           WS_OVERLAPPEDWINDOW,
           CW_USEDEFAULT,
           CW_USEDEFAULT,
           544,
           375,
           HWND_DESKTOP,
           hMenu, // set menu to the window
           hThisInstance,
           NULL
           );

    ShowWindow (hwnd, nCmdShow);

    while (GetMessage (&messages, NULL, 0, 0))
    {
        TranslateMessage(&messages);
        DispatchMessage(&messages);
    }

    return messages.wParam;
}

LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
        case WM_COMMAND:
            // Handle menu selections here, using wParam to identify the selected menu item
            break;
        case WM_DESTROY:
            PostQuitMessage (0);
            break;
        default:
            return DefWindowProc (hwnd, message, wParam, lParam);
    }
    return 0;
}
