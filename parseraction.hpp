#ifndef PARSERACTION_HPP
#define PARSERACTION_HPP

#include <string>

namespace Parser {
  class Action
  {
  public:
    bool char_present;
    wchar_t ch;

    virtual std::string name( void ) = 0;

    Action() : char_present( false ), ch( -1 ) {};
    virtual ~Action() {};
  };

  class Ignore : public Action {
  public: std::string name( void ) { return std::string( "Ignore" ); }
  };
  class Print : public Action {
  public: std::string name( void ) { return std::string( "Print" ); }
  };
  class Execute : public Action {
  public: std::string name( void ) { return std::string( "Execute" ); }
  };
  class Clear : public Action {
  public: std::string name( void ) { return std::string( "Clear" ); }
  };
  class Collect : public Action {
  public: std::string name( void ) { return std::string( "Collect" ); }
  };
  class Param : public Action {
  public: std::string name( void ) { return std::string( "Param" ); }
  };
  class Esc_Dispatch : public Action {
  public: std::string name( void ) { return std::string( "Esc_Dispatch" ); }
  };
  class CSI_Dispatch : public Action {
  public: std::string name( void ) { return std::string( "CSI_Dispatch" ); }
  };
  class Hook : public Action {
  public: std::string name( void ) { return std::string( "Hook" ); }
  };
  class Put : public Action {
  public: std::string name( void ) { return std::string( "Put" ); }
  };
  class Unhook : public Action {
  public: std::string name( void ) { return std::string( "Unhook" ); }
  };
  class OSC_Start : public Action {
  public: std::string name( void ) { return std::string( "OSC_Start" ); }
  };
  class OSC_Put : public Action {
  public: std::string name( void ) { return std::string( "OSC_Put" ); }
  };
  class OSC_End : public Action {
  public: std::string name( void ) { return std::string( "OSC_End" ); }
  };
}

#endif