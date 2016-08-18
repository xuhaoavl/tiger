// This is automatically generated by the Tiger compiler.
// Do NOT modify!

// structures

char * LinkedList_gc_map = "";

struct LinkedList
{
  struct LinkedList_vtable *vptr;
};

char * Element_gc_map = "000";

struct Element
{
  struct Element_vtable *vptr;
  int Age;
  int Salary;
  int Married;
};

char * List_gc_map = "110";

struct List
{
  struct List_vtable *vptr;
  struct Element * elem;
  struct List * next;
  int end;
};

char * LL_gc_map = "";

struct LL
{
  struct LL_vtable *vptr;
};
// vtables structures
struct LinkedList_vtable
{
  char *LinkedList_gc_map;
};

struct Element_vtable
{
  char *Element_gc_map;
  int (*Init)();
  int (*GetAge)();
  int (*GetSalary)();
  int (*GetMarried)();
  int (*Equal)();
  int (*Compare)();
};

struct List_vtable
{
  char *List_gc_map;
  int (*Init)();
  int (*InitNew)();
  struct List * (*Insert)();
  int (*SetNext)();
  struct List * (*Delete)();
  int (*Search)();
  int (*GetEnd)();
  struct Element * (*GetElem)();
  struct List * (*GetNext)();
  int (*Print)();
};

struct LL_vtable
{
  char *LL_gc_map;
  int (*Start)();
};


// methods dec
int Element_Init(struct Element * this, int v_Age, int v_Salary, int v_Married);
int Element_GetAge(struct Element * this);
int Element_GetSalary(struct Element * this);
int Element_GetMarried(struct Element * this);
int Element_Equal(struct Element * this, struct Element * other);
int Element_Compare(struct Element * this, int num1, int num2);
int List_Init(struct List * this);
int List_InitNew(struct List * this, struct Element * v_elem, struct List * v_next, int v_end);
struct List * List_Insert(struct List * this, struct Element * new_elem);
int List_SetNext(struct List * this, struct List * v_next);
struct List * List_Delete(struct List * this, struct Element * e);
int List_Search(struct List * this, struct Element * e);
int List_GetEnd(struct List * this);
struct Element * List_GetElem(struct List * this);
struct List * List_GetNext(struct List * this);
int List_Print(struct List * this);
int LL_Start(struct LL * this);


extern void * prev;
// vtables
struct LinkedList_vtable LinkedList_vtable_ = 
{
  &LinkedList_gc_map,
};

struct Element_vtable Element_vtable_ = 
{
  &Element_gc_map,
  Element_Init,
  Element_GetAge,
  Element_GetSalary,
  Element_GetMarried,
  Element_Equal,
  Element_Compare,
};

struct List_vtable List_vtable_ = 
{
  &List_gc_map,
  List_Init,
  List_InitNew,
  List_Insert,
  List_SetNext,
  List_Delete,
  List_Search,
  List_GetEnd,
  List_GetElem,
  List_GetNext,
  List_Print,
};

struct LL_vtable LL_vtable_ = 
{
  &LL_gc_map,
  LL_Start,
};


// methods
char * Element_Init_arguments_gc_map = "1000";
char * Element_Init_locals_gc_map = "";
struct Element_Init_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
};

int Element_Init(struct Element * this, int v_Age, int v_Salary, int v_Married)
{
  struct Element_Init_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = Element_Init_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = Element_Init_locals_gc_map;



  this->Age = v_Age;
  this->Salary = v_Salary;
  this->Married = v_Married;
  prev  = frame.prev;
  return 1;
}
char * Element_GetAge_arguments_gc_map = "1";
char * Element_GetAge_locals_gc_map = "";
struct Element_GetAge_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
};

int Element_GetAge(struct Element * this)
{
  struct Element_GetAge_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = Element_GetAge_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = Element_GetAge_locals_gc_map;



  prev  = frame.prev;
  return this->Age;
}
char * Element_GetSalary_arguments_gc_map = "1";
char * Element_GetSalary_locals_gc_map = "";
struct Element_GetSalary_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
};

int Element_GetSalary(struct Element * this)
{
  struct Element_GetSalary_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = Element_GetSalary_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = Element_GetSalary_locals_gc_map;



  prev  = frame.prev;
  return this->Salary;
}
char * Element_GetMarried_arguments_gc_map = "1";
char * Element_GetMarried_locals_gc_map = "";
struct Element_GetMarried_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
};

int Element_GetMarried(struct Element * this)
{
  struct Element_GetMarried_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = Element_GetMarried_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = Element_GetMarried_locals_gc_map;



  prev  = frame.prev;
  return this->Married;
}
char * Element_Equal_arguments_gc_map = "11";
char * Element_Equal_locals_gc_map = "0000111111";
struct Element_Equal_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
  struct Element *	x_1;
  struct Element *	x_2;
  struct Element *	x_3;
  struct Element *	x_4;
  struct Element *	x_5;
  struct Element *	x_6;
};

int Element_Equal(struct Element * this, struct Element * other)
{
  struct Element_Equal_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = Element_Equal_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = Element_Equal_locals_gc_map;


  int ret_val;
  int aux01;
  int aux02;
  int nt;
  frame.x_1 = 0;
  frame.x_2 = 0;
  frame.x_3 = 0;
  frame.x_4 = 0;
  frame.x_5 = 0;
  frame.x_6 = 0;

  ret_val = 1;
  aux01 = (frame.x_1=other, frame.x_1->vptr->GetAge(frame.x_1));
  if (!((frame.x_2=this, frame.x_2->vptr->Compare(frame.x_2, aux01, this->Age))))
    ret_val = 0;

  else
  {
    aux02 = (frame.x_3=other, frame.x_3->vptr->GetSalary(frame.x_3));
    if (!((frame.x_4=this, frame.x_4->vptr->Compare(frame.x_4, aux02, this->Salary))))
      ret_val = 0;

    else
      if (this->Married)
        if (!((frame.x_5=other, frame.x_5->vptr->GetMarried(frame.x_5))))
          ret_val = 0;

        else
          nt = 0;


      else
        if ((frame.x_6=other, frame.x_6->vptr->GetMarried(frame.x_6)))
          ret_val = 0;

        else
          nt = 0;



    }

  prev  = frame.prev;
  return ret_val;
}
char * Element_Compare_arguments_gc_map = "100";
char * Element_Compare_locals_gc_map = "00";
struct Element_Compare_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
};

int Element_Compare(struct Element * this, int num1, int num2)
{
  struct Element_Compare_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = Element_Compare_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = Element_Compare_locals_gc_map;


  int retval;
  int aux02;

  retval = 0;
  aux02 = num2 + 1;
  if (num1 < num2)
    retval = 0;

  else
    if (!(num1 < aux02))
      retval = 0;

    else
      retval = 1;


  prev  = frame.prev;
  return retval;
}
char * List_Init_arguments_gc_map = "1";
char * List_Init_locals_gc_map = "";
struct List_Init_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
};

int List_Init(struct List * this)
{
  struct List_Init_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = List_Init_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = List_Init_locals_gc_map;



  this->end = 1;
  prev  = frame.prev;
  return 1;
}
char * List_InitNew_arguments_gc_map = "1110";
char * List_InitNew_locals_gc_map = "";
struct List_InitNew_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
};

int List_InitNew(struct List * this, struct Element * v_elem, struct List * v_next, int v_end)
{
  struct List_InitNew_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = List_InitNew_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = List_InitNew_locals_gc_map;



  this->end = v_end;
  this->elem = v_elem;
  this->next = v_next;
  prev  = frame.prev;
  return 1;
}
char * List_Insert_arguments_gc_map = "11";
char * List_Insert_locals_gc_map = "0111";
struct List_Insert_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
  struct List *	aux03;
  struct List *	aux02;
  struct List *	x_7;
};

struct List * List_Insert(struct List * this, struct Element * new_elem)
{
  struct List_Insert_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = List_Insert_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = List_Insert_locals_gc_map;


  int ret_val;
  frame.aux03 = 0;
  frame.aux02 = 0;
  frame.x_7 = 0;

  frame.aux03 = this;
  frame.aux02 = ((struct List*)(Tiger_new (&List_vtable_, sizeof(struct List))));
  ret_val = (frame.x_7=frame.aux02, frame.x_7->vptr->InitNew(frame.x_7, new_elem, frame.aux03, 0));
  prev  = frame.prev;
  return frame.aux02;
}
char * List_SetNext_arguments_gc_map = "11";
char * List_SetNext_locals_gc_map = "";
struct List_SetNext_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
};

int List_SetNext(struct List * this, struct List * v_next)
{
  struct List_SetNext_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = List_SetNext_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = List_SetNext_locals_gc_map;



  this->next = v_next;
  prev  = frame.prev;
  return 1;
}
char * List_Delete_arguments_gc_map = "11";
char * List_Delete_locals_gc_map = "1001101001111111";
struct List_Delete_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
  struct List *	my_head;
  struct List *	aux01;
  struct List *	prev_01;
  struct Element *	var_elem;
  struct Element *	x_8;
  struct List *	x_9;
  struct List *	x_10;
  struct List *	x_11;
  struct List *	x_12;
  struct List *	x_13;
  struct List *	x_14;
};

struct List * List_Delete(struct List * this, struct Element * e)
{
  struct List_Delete_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = List_Delete_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = List_Delete_locals_gc_map;


  frame.my_head = 0;
  int ret_val;
  int aux05;
  frame.aux01 = 0;
  frame.prev_01 = 0;
  int var_end;
  frame.var_elem = 0;
  int aux04;
  int nt;
  frame.x_8 = 0;
  frame.x_9 = 0;
  frame.x_10 = 0;
  frame.x_11 = 0;
  frame.x_12 = 0;
  frame.x_13 = 0;
  frame.x_14 = 0;

  frame.my_head = this;
  ret_val = 0;
  aux04 = 0 - 1;
  frame.aux01 = this;
  frame.prev_01 = this;
  var_end = this->end;
  frame.var_elem = this->elem;
  while (!(var_end) && !(ret_val))
  {
    if ((frame.x_8=e, frame.x_8->vptr->Equal(frame.x_8, frame.var_elem)))
    {
      ret_val = 1;
      if (aux04 < 0)
      {
        frame.my_head = (frame.x_9=frame.aux01, frame.x_9->vptr->GetNext(frame.x_9));
        }

      else
      {
  System_out_println (0 - 555);
        aux05 = (frame.x_10=frame.prev_01, frame.x_10->vptr->SetNext(frame.x_10, (frame.x_11=frame.aux01, frame.x_11->vptr->GetNext(frame.x_11))));
  System_out_println (0 - 555);
        }

      }

    else
      nt = 0;

    if (!(ret_val))
    {
      frame.prev_01 = frame.aux01;
      frame.aux01 = (frame.x_12=frame.aux01, frame.x_12->vptr->GetNext(frame.x_12));
      var_end = (frame.x_13=frame.aux01, frame.x_13->vptr->GetEnd(frame.x_13));
      frame.var_elem = (frame.x_14=frame.aux01, frame.x_14->vptr->GetElem(frame.x_14));
      aux04 = 1;
      }

    else
      nt = 0;

    }

  prev  = frame.prev;
  return frame.my_head;
}
char * List_Search_arguments_gc_map = "11";
char * List_Search_locals_gc_map = "011001111";
struct List_Search_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
  struct List *	aux01;
  struct Element *	var_elem;
  struct Element *	x_15;
  struct List *	x_16;
  struct List *	x_17;
  struct List *	x_18;
};

int List_Search(struct List * this, struct Element * e)
{
  struct List_Search_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = List_Search_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = List_Search_locals_gc_map;


  int int_ret_val;
  frame.aux01 = 0;
  frame.var_elem = 0;
  int var_end;
  int nt;
  frame.x_15 = 0;
  frame.x_16 = 0;
  frame.x_17 = 0;
  frame.x_18 = 0;

    int_ret_val = 0;
    frame.aux01 = this;
    var_end = this->end;
    frame.var_elem = this->elem;
    while (!(var_end))
    {
      if ((frame.x_15=e, frame.x_15->vptr->Equal(frame.x_15, frame.var_elem)))
      {
        int_ret_val = 1;
        }

      else
        nt = 0;

      frame.aux01 = (frame.x_16=frame.aux01, frame.x_16->vptr->GetNext(frame.x_16));
      var_end = (frame.x_17=frame.aux01, frame.x_17->vptr->GetEnd(frame.x_17));
      frame.var_elem = (frame.x_18=frame.aux01, frame.x_18->vptr->GetElem(frame.x_18));
      }

  prev  = frame.prev;
  return int_ret_val;
}
char * List_GetEnd_arguments_gc_map = "1";
char * List_GetEnd_locals_gc_map = "";
struct List_GetEnd_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
};

int List_GetEnd(struct List * this)
{
  struct List_GetEnd_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = List_GetEnd_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = List_GetEnd_locals_gc_map;



  prev  = frame.prev;
  return this->end;
}
char * List_GetElem_arguments_gc_map = "1";
char * List_GetElem_locals_gc_map = "";
struct List_GetElem_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
};

struct Element * List_GetElem(struct List * this)
{
  struct List_GetElem_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = List_GetElem_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = List_GetElem_locals_gc_map;



  prev  = frame.prev;
  return this->elem;
}
char * List_GetNext_arguments_gc_map = "1";
char * List_GetNext_locals_gc_map = "";
struct List_GetNext_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
};

struct List * List_GetNext(struct List * this)
{
  struct List_GetNext_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = List_GetNext_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = List_GetNext_locals_gc_map;



  prev  = frame.prev;
  return this->next;
}
char * List_Print_arguments_gc_map = "1";
char * List_Print_locals_gc_map = "1011111";
struct List_Print_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
  struct List *	aux01;
  struct Element *	var_elem;
  struct Element *	x_19;
  struct List *	x_20;
  struct List *	x_21;
  struct List *	x_22;
};

int List_Print(struct List * this)
{
  struct List_Print_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = List_Print_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = List_Print_locals_gc_map;


  frame.aux01 = 0;
  int var_end;
  frame.var_elem = 0;
  frame.x_19 = 0;
  frame.x_20 = 0;
  frame.x_21 = 0;
  frame.x_22 = 0;

      frame.aux01 = this;
      var_end = this->end;
      frame.var_elem = this->elem;
      while (!(var_end))
      {
  System_out_println ((frame.x_19=frame.var_elem, frame.x_19->vptr->GetAge(frame.x_19)));
        frame.aux01 = (frame.x_20=frame.aux01, frame.x_20->vptr->GetNext(frame.x_20));
        var_end = (frame.x_21=frame.aux01, frame.x_21->vptr->GetEnd(frame.x_21));
        frame.var_elem = (frame.x_22=frame.aux01, frame.x_22->vptr->GetElem(frame.x_22));
        }

  prev  = frame.prev;
  return 1;
}
char * LL_Start_arguments_gc_map = "1";
char * LL_Start_locals_gc_map = "1101111111111111111111111111";
struct LL_Start_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
  struct List *	head;
  struct List *	last_elem;
  struct Element *	el01;
  struct Element *	el02;
  struct Element *	el03;
  struct List *	x_23;
  struct List *	x_24;
  struct List *	x_25;
  struct Element *	x_26;
  struct List *	x_27;
  struct List *	x_28;
  struct Element *	x_29;
  struct List *	x_30;
  struct List *	x_31;
  struct Element *	x_32;
  struct List *	x_33;
  struct List *	x_34;
  struct Element *	x_35;
  struct List *	x_36;
  struct List *	x_37;
  struct Element *	x_38;
  struct List *	x_39;
  struct List *	x_40;
  struct List *	x_41;
  struct List *	x_42;
  struct List *	x_43;
  struct List *	x_44;
};

int LL_Start(struct LL * this)
{
  struct LL_Start_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = LL_Start_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = LL_Start_locals_gc_map;


  frame.head = 0;
  frame.last_elem = 0;
  int aux01;
  frame.el01 = 0;
  frame.el02 = 0;
  frame.el03 = 0;
  frame.x_23 = 0;
  frame.x_24 = 0;
  frame.x_25 = 0;
  frame.x_26 = 0;
  frame.x_27 = 0;
  frame.x_28 = 0;
  frame.x_29 = 0;
  frame.x_30 = 0;
  frame.x_31 = 0;
  frame.x_32 = 0;
  frame.x_33 = 0;
  frame.x_34 = 0;
  frame.x_35 = 0;
  frame.x_36 = 0;
  frame.x_37 = 0;
  frame.x_38 = 0;
  frame.x_39 = 0;
  frame.x_40 = 0;
  frame.x_41 = 0;
  frame.x_42 = 0;
  frame.x_43 = 0;
  frame.x_44 = 0;

        frame.last_elem = ((struct List*)(Tiger_new (&List_vtable_, sizeof(struct List))));
        aux01 = (frame.x_23=frame.last_elem, frame.x_23->vptr->Init(frame.x_23));
        frame.head = frame.last_elem;
        aux01 = (frame.x_24=frame.head, frame.x_24->vptr->Init(frame.x_24));
        aux01 = (frame.x_25=frame.head, frame.x_25->vptr->Print(frame.x_25));
        frame.el01 = ((struct Element*)(Tiger_new (&Element_vtable_, sizeof(struct Element))));
        aux01 = (frame.x_26=frame.el01, frame.x_26->vptr->Init(frame.x_26, 25, 37000, 0));
        frame.head = (frame.x_27=frame.head, frame.x_27->vptr->Insert(frame.x_27, frame.el01));
        aux01 = (frame.x_28=frame.head, frame.x_28->vptr->Print(frame.x_28));
  System_out_println (10000000);
        frame.el01 = ((struct Element*)(Tiger_new (&Element_vtable_, sizeof(struct Element))));
        aux01 = (frame.x_29=frame.el01, frame.x_29->vptr->Init(frame.x_29, 39, 42000, 1));
        frame.el02 = frame.el01;
        frame.head = (frame.x_30=frame.head, frame.x_30->vptr->Insert(frame.x_30, frame.el01));
        aux01 = (frame.x_31=frame.head, frame.x_31->vptr->Print(frame.x_31));
  System_out_println (10000000);
        frame.el01 = ((struct Element*)(Tiger_new (&Element_vtable_, sizeof(struct Element))));
        aux01 = (frame.x_32=frame.el01, frame.x_32->vptr->Init(frame.x_32, 22, 34000, 0));
        frame.head = (frame.x_33=frame.head, frame.x_33->vptr->Insert(frame.x_33, frame.el01));
        aux01 = (frame.x_34=frame.head, frame.x_34->vptr->Print(frame.x_34));
        frame.el03 = ((struct Element*)(Tiger_new (&Element_vtable_, sizeof(struct Element))));
        aux01 = (frame.x_35=frame.el03, frame.x_35->vptr->Init(frame.x_35, 27, 34000, 0));
  System_out_println ((frame.x_36=frame.head, frame.x_36->vptr->Search(frame.x_36, frame.el02)));
  System_out_println ((frame.x_37=frame.head, frame.x_37->vptr->Search(frame.x_37, frame.el03)));
  System_out_println (10000000);
        frame.el01 = ((struct Element*)(Tiger_new (&Element_vtable_, sizeof(struct Element))));
        aux01 = (frame.x_38=frame.el01, frame.x_38->vptr->Init(frame.x_38, 28, 35000, 0));
        frame.head = (frame.x_39=frame.head, frame.x_39->vptr->Insert(frame.x_39, frame.el01));
        aux01 = (frame.x_40=frame.head, frame.x_40->vptr->Print(frame.x_40));
  System_out_println (2220000);
        frame.head = (frame.x_41=frame.head, frame.x_41->vptr->Delete(frame.x_41, frame.el02));
        aux01 = (frame.x_42=frame.head, frame.x_42->vptr->Print(frame.x_42));
  System_out_println (33300000);
        frame.head = (frame.x_43=frame.head, frame.x_43->vptr->Delete(frame.x_43, frame.el01));
        aux01 = (frame.x_44=frame.head, frame.x_44->vptr->Print(frame.x_44));
  System_out_println (44440000);
  prev  = frame.prev;
  return 0;
}

// main method
char * Tiger_main_locals_gc_map = "1";
struct Tiger_main_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
  struct LL *	x_0;
};

int Tiger_main ()
{
  struct Tiger_main_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = "";
  frame.arguments_base_address = "";
  frame.locals_gc_map = Tiger_main_locals_gc_map;


  frame.x_0 = 0;

  System_out_println ((frame.x_0=((struct LL*)(Tiger_new (&LL_vtable_, sizeof(struct LL)))), frame.x_0->vptr->Start(frame.x_0)));
}



