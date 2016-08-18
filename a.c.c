// This is automatically generated by the Tiger compiler.
// Do NOT modify!

// structures

char * Factorial_gc_map = "";

struct Factorial
{
  struct Factorial_vtable *vptr;
};

char * Fac_gc_map = "";

struct Fac
{
  struct Fac_vtable *vptr;
};
// vtables structures
struct Factorial_vtable
{
  char *Factorial_gc_map;
};

struct Fac_vtable
{
  char *Fac_gc_map;
  int (*ComputeFac)();
};


// methods dec
int Fac_ComputeFac(struct Fac * this, int num);


extern void * prev;
// vtables
struct Factorial_vtable Factorial_vtable_ = 
{
  &Factorial_gc_map,
};

struct Fac_vtable Fac_vtable_ = 
{
  &Fac_gc_map,
  Fac_ComputeFac,
};


// methods
char * Fac_ComputeFac_arguments_gc_map = "10";
char * Fac_ComputeFac_locals_gc_map = "01";
struct Fac_ComputeFac_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
  struct Fac *	x_1;
};

int Fac_ComputeFac(struct Fac * this, int num)
{
  struct Fac_ComputeFac_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = Fac_ComputeFac_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = Fac_ComputeFac_locals_gc_map;


  int num_aux;
  frame.x_1 = 0;

  if (num < 1)
    num_aux = 1;

  else
    num_aux = num * (frame.x_1=this, frame.x_1->vptr->ComputeFac(frame.x_1, num - 1));

  prev  = frame.prev;
  return num_aux;
}

// main method
char * Tiger_main_locals_gc_map = "1";
struct Tiger_main_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
  struct Factorial *	x_0;
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

  System_out_println ((frame.x_0=((struct Fac*)(Tiger_new (&Fac_vtable_, sizeof(struct Fac)))), frame.x_0->vptr->ComputeFac(frame.x_0, 10)));
}




