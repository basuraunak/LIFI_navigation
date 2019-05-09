function varargout = guinavi(varargin)
% BLOOP MATLAB code for bloop.fig
%      BLOOP, by itself, creates a new BLOOP or raises the existing
%      singleton*.
%
%      H = BLOOP returns the handle to a new BLOOP or the handle to
%      the existing singleton*.
%
%      BLOOP('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in BLOOP.M with the given input arguments.
%
%      BLOOP('Property','Value',...) creates a new BLOOP or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before guinavi_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to guinavi_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help bloop

% Last Modified by GUIDE v2.5 01-Mar-2019 17:02:23

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @guinavi_OpeningFcn, ...
                   'gui_OutputFcn',  @guinavi_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before bloop is made visible.
function guinavi_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to bloop (see VARARGIN)

% Choose default command line output for bloop
handles.output = hObject;
% s = serial('COM11','BaudRate',9600);
% % 
% % s = serial('COM11');
% % set(s,'BaudRate',9600,'StopBits',1,'FlowControl','none','Parity','none','DataBits',8,'outputBufferSize',16394); 
% % s.InputBufferSize=16390;
% % s.TimeOut=20;
% fopen(s);

% handles.s=s;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes bloop wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = guinavi_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

set(handles.edit1,'String','Wait....');
s = serial('COM5','BaudRate',9600);
    fopen(s);

try
while(1)
    disp('S');
    for i=1:10
    fprintf(s,'10');
    pause(2);
    end
   b=get(handles.bloop,'Value');
   pause(0.5);
   if b==1
      break; 
   end
   
   
end
fclose(s);
set(handles.edit1,'String','Transmit Completed....');


delete(instrfind);
catch
    fclose(s);


delete(instrfind);
end
% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
set(handles.edit1,'String','Wait....');

s = serial('COM5','BaudRate',9600);
    fopen(s);

try

while(1)
    disp('A');
        for i=1:10

   fprintf(s,'20');
   pause(2);
        end
   b=get(handles.bloop,'Value');
   pause(0.3);
   if b==1
      break; 
   end
   
   
end
fclose(s);
set(handles.edit1,'String','Transmit Completed....');


delete(instrfind);
catch
    fclose(s);


delete(instrfind);
end
% --- Executes on button press in bedroom1.
function bedroom1_Callback(hObject, eventdata, handles)
% hObject    handle to bedroom1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
set(handles.edit1,'String','Wait....');

s = serial('COM5','BaudRate',9600);
    fopen(s);
try


while(1)
    disp('B');
     for i=1:10
    fprintf(s,'30');
    pause(2);
     end
   b=get(handles.bloop,'Value');
   pause(0.3);
   if b==1
      break; 
   end
   
   
end
fclose(s);
set(handles.edit1,'String','Transmit Completed....');


delete(instrfind);
catch
    fclose(s);


delete(instrfind);
end
% --- Executes on button press in bedroom2.
function bedroom2_Callback(hObject, eventdata, handles)
% hObject    handle to bedroom2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
set(handles.edit1,'String','Wait....');

s = serial('COM5','BaudRate',9600);
    fopen(s);

try

while(1)
    disp('C');
     for i=1:10
    fprintf(s,'80');
    pause(2);
    
     end
   b=get(handles.bloop,'Value');
   pause(0.5);
   if b==1
      break; 
   end
   
   
end
fclose(s);


delete(instrfind);
set(handles.edit1,'String','Transmit Completed....');
catch
    fclose(s);


delete(instrfind);
end
% --- Executes on button press in Kitchen.
function Kitchen_Callback(hObject, eventdata, handles)
% hObject    handle to Kitchen (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
set(handles.edit1,'String','Wait....');

s = serial('COM5','BaudRate',9600);
    fopen(s);

try

while(1)
for i=1:10
    
    fprintf(s,'90');
pause(2);
end
   b=get(handles.bloop,'Value');
   pause(0.5);
   if b==1
      break; 
   end
   
   
end
fclose(s);


delete(instrfind);
catch
    fclose(s);


delete(instrfind);
end
set(handles.edit1,'String','Transmit Completed....');

% --- Executes on button press in bloop.
function bloop_Callback(hObject, eventdata, handles)
% hObject    handle to bloop (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of bloop



function edit1_Callback(hObject, eventdata, handles)
% hObject    handle to edit1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit1 as text
%        str2double(get(hObject,'String')) returns contents of edit1 as a double


% --- Executes during object creation, after setting all properties.
function edit1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
