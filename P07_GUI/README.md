# Šis fails tiks papildināts laika gaitā

**Darba uzdevums šai lekcijai**  
Programmas kodu neiekļāvu README.md failā, lai nepiegrūžotu. Kodi atrodas atsevišķi šajā pašā mapītē. Šeit liku pašus vizuāļus.  

# 1. uzdevums
![Vizualis](https://github.com/MACTEP-ETF/RTR108/blob/master/P07_GUI/PNG/GUI%20-%20Hello%20World!.png)  

# 2. uzdevums
![Vizualis](https://github.com/MACTEP-ETF/RTR108/blob/master/P07_GUI/PNG/2a%20-%20Layout.png)  

![Vizualis](https://github.com/MACTEP-ETF/RTR108/blob/master/P07_GUI/PNG/2b%20-%20Layout.png)  
 

Horizontāla izkārtojuma piemērs:  
...   

Horizontāla izkārtojuma piemērs:  
...   



## Concepts  
- Widgets:  
  - Buttons  
  - Labels  
  - Line edits  
  - Combo boxes  
  - Radio buttons  
- Layout managers:
  - Layout managers are classes that allow you to size and position your widgets at the places you want them to be on the application’s form. Layout managers automatically adapt to resize events and content changes. They also control the size of the widgets within them. This means that the widgets in a layout are automatically resized whenever the form is resized.  
- Dialogs  
- Main windows:  
  - **One menu bar** is at the top of the window. The menu bar holds the application’s main menu.  
  - **Several toolbars** are on the sides of the window. Toolbars are suitable for holding tool buttons and other kinds of widgets such as QComboBox, QSpinBox, and more.  
  - **One central widget** is in the center of the window. The central widget can be of any type, or it can be a composite widget.  
  - **Several dock widgets** are around the central widget. Dock widgets are small, movable windows.  
  - **One status bar** is at the bottom of the window. The status bar shows information on the application’s general status.  
- Applications:  
  - Handling initialization and finalization  
  - Providing the event loop and event handling  
  - Handling most of the system-wide and application-wide settings  
  - Providing access to global information, such as the application’s directory, screen size, and so on  
  - Parsing common command-line arguments  
  - Defining the application’s look and feel  
  - Providing localization capabilities  
- Event loops  
- Signals and slots:  
  - A signal can be connected to one or many slots.  
  - A signal may also be connected to another signal.  
  - A slot may be connected to one or many signals.  

## Explanation for methods (pašsaprotamos es neaprakstīšu, tādus kā *.setWindowTitle*, *.show*, *.exec* u.c.)  
- **.setGeometry (100, 100, 500, 500)** –  the first two parameters are the 'x' and 'y' coordinates at which the window will be placed on the screen. The **third** and **fourth** parameters are the **width** and **height** of the window.  
- **.move(50, 50)** – piešķir jebkuram objektam (window, textobject utt.) nobīdi pēc 'x' un 'y' koordinātēm.  
- **.resizeEvent()** – calculate widget size and position dynamically.  

## Vitāli svarīga informācija
 - The PyQt5 ownership model ensures that if you delete a parent (for example, a top-level window), then all of its children (widgets) are automatically deleted as well.  To avoid memory leaks, you should **always make sure that any QWidget object has a parent, with the sole exception of top-level windows**.  




- **X** –
