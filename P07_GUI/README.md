# Šis fails tiks papildināts laika gaitā

**Darba uzdevums šai lekcijai**  
Programmas kodu neiekļāvu README.md failā, lai nepiegrūžotu. Kodi atrodas atsevišķi šajā pašā mapītē. Šeit liku pašus vizuāļus. 

# Vitāli svarīga informācija
- The PyQt5 ownership model ensures that if you delete a parent (for example, a top-level window), then all of its children (widgets) are automatically deleted as well.  To avoid memory leaks, you should **always make sure that any QWidget object has a parent, with the sole exception of top-level windows**.  

# Uzdevumi
## 1. uzdevums (Widgets)
![Vizualis](https://github.com/MACTEP-ETF/RTR108/blob/master/P07_GUI/PNG/GUI%20-%20Hello%20World!.png)  

## 2. uzdevums (Layout managers)
![Vizualis](https://github.com/MACTEP-ETF/RTR108/blob/master/P07_GUI/PNG/2a%20-%20Layout.png)  

![Vizualis](https://github.com/MACTEP-ETF/RTR108/blob/master/P07_GUI/PNG/2b%20-%20Layout.png)  

![Vizualis](https://github.com/MACTEP-ETF/RTR108/blob/master/P07_GUI/PNG/2c%20-%20Layout.png)  
 
![Vizualis](https://github.com/MACTEP-ETF/RTR108/blob/master/P07_GUI/PNG/2d%20-%20Layout.png)  

## 3. uzdevums (Dialogs)
![Vizualis](https://github.com/MACTEP-ETF/RTR108/blob/master/P07_GUI/PNG/3%20-%20Dialog.png)  

## 4. uzdevums (Main windows)
![Vizualis](https://github.com/MACTEP-ETF/RTR108/blob/master/P07_GUI/PNG/4%20-%20Main%20Windows.png)  

## 5. uzdevums (Signals and slots)
![Vizualis](https://github.com/MACTEP-ETF/RTR108/blob/master/P07_GUI/PNG/5%20-%20SignalsAndSlots.gif)  

## GUI noslēdzošais projekts ""
...



# Concepts  
- **Widgets**:  
  - Buttons  
  - Labels  
  - Line edits  
  - Combo boxes  
  - Radio buttons  
- **Layout managers**  
    - **QHBoxLayout** – arranges widgets horizontally from left to right.  
    - **QVBoxLayout** – arranges widgets vertically, from top to bottom.  
    - **QGridLayout** – arranges widgets into a grid of rows and columns. Every widget will have a relative position on the grid. You can define a widget’s position by passing it a pair of coordinates in the form of (row, column). These coordinates should be valid int numbers. They define which cell of the grid you’re going to place the widget on.  
    - **QFormLayout** – arranges widgets in a two-column layout. The first column usually displays messages in labels. The second column generally contains widgets like *QLineEdit*, *QComboBox*, *QSpinBox*, and so on. These allow the user to enter or edit data regarding the information in the first column. The left column consists of labels, and the right column consists of field widgets. If you’re dealing with a database application, then this kind of layout can be an attractive option for increased productivity when you’re creating your forms.  
      
  *Layout managers are classes that allow you to size and position your widgets at the places you want them to be on the application’s form. Layout managers automatically adapt to resize events and content changes. They also control the size of the widgets within them. This means that the widgets in a layout are automatically resized whenever the form is resized.*  
- **Dialogs**  
  - **A Main Window-Style application** – the application’s main window inherits from *QMainWindow*.  
  - **A Dialog-Style application** – the application’s main window inherits from *QDialog*.  
    
  A **dialog window** is always a top-level window that you can use as the main window for your Dialog-Style application.  
  When dialog windows are used to communicate with the user, they may be:
    - *Modal dialogs*: block input to any other visible windows in the same application. You can display a modal dialog by calling *.exec_()*.  
    - *Modeless dialogs*: operate independently of other windows in the same application. You can display a modeless dialog by using *.show()*.  
    
  Dialog windows can also provide a return value and have default buttons (for example, OK and Cancel).  
- **Main windows**  
  Most of the time, your GUI applications will be **Main Window-Style**. This means that they’ll have a menu bar, some toolbars, a status bar, and a central widget that will be the GUI’s main element. It’s also common that your apps will have several dialog windows to accomplish secondary actions that depend on user input.  
  You’ll use the class *QMainWindow* to develop Main Window-Style applications. You need to inherit from *QMainWindow* to create your main GUI class. An instance of a class that derives from *QMainWindow* is considered to be a **main window**. *QMainWindow* provides a framework for building your application’s GUI. The class has its own built-in layout, which you can use to place the following:  
  - **One menu bar** is at the top of the window. The menu bar holds the application’s main menu.  
  - **Several toolbars** are on the sides of the window. Toolbars are suitable for holding tool buttons and other kinds of widgets such as QComboBox, QSpinBox, and more.  
  - **One central widget** is in the center of the window. The central widget can be of any type, or it can be a composite widget.  
  - **Several dock widgets** are around the central widget. Dock widgets are small, movable windows.  
  - **One status bar** is at the bottom of the window. The status bar shows information on the application’s general status.  
    
  You can’t create a main window without first setting a central widget. You must have a central widget, even if it’s just a placeholder. When this is the case, you can use a *QWidget* object as your central widget. You can set the main window’s central widget with *.setCentralWidget()*. The main window’s layout will allow you to have only one central widget, but it can be a single or a composite widget.  
- **Applications**  
  This class is at the core of any PyQt application. It manages the application’s control flow as well as its main settings. In PyQt, any instance of *QApplication* is considered to be an **application**. Every PyQt GUI application must have one *QApplication* object. Some of the application’s responsibilities include:  
  - Handling initialization and finalization  
  - Providing the event loop and event handling  
  - Handling most of the system-wide and application-wide settings  
  - Providing access to global information, such as the application’s directory, screen size, and so on  
  - Parsing common command-line arguments  
  - Defining the application’s look and feel  
  - Providing localization capabilities  
- **Event loops**  
  GUI applications are event-driven. This means that functions and methods are executed in response to user actions like clicking on a button, selecting an item from a combo box, entering or updating the text in a text edit, pressing a key on the keyboard, and so on. These user actions are generally called events.  
  An event loop is an infinite loop in which all events from the user, the window system, and any other sources are processed and dispatched. The event loop waits for an event to occur and then dispatches it to perform some task. The event loop continues to work until the application is terminated.  
- **Signals and slots**  
  PyQt widgets act as **event-catchers**. This means that every widget can catch a specific number of events, like mouse clicks, keypresses, and so on. In response to these events, widgets always emit a **signal**, which is a kind of message that announces a change in its state.  
  The signal on its own doesn’t perform any action. If you want a signal to trigger an action, then you need to connect it to a **slot**. This is the function or method that will perform an action whenever the connecting signal is emitted. You can use any Python callable (or **callback**) as a slot.  
  If a signal is connected to a slot, then the slot is called whenever the signal is emitted. If a signal isn’t connected to any slot, then nothing happens and the signal is ignored. Here are some of the most useful features of this mechanism:  
  - A signal can be connected to one or many slots.  
  - A signal may also be connected to another signal.  
  - A slot may be connected to one or many signals.  
  
  Example: *widget.signal.connect(slot_function)*  
  This will connect *slot_function* to *widget.signal*. Whenever *signal* is **emitted**, *slot_function()* will be **called**.  
# Explanation for some methods (pašsaprotamos es neaprakstīšu, tādus kā *.setWindowTitle*, *.show*, *.exec* u.c.)  
- **.setGeometry (100, 100, 500, 500)** –  the first two parameters are the 'x' and 'y' coordinates at which the window will be placed on the screen. The **third** and **fourth** parameters are the **width** and **height** of the window.  


