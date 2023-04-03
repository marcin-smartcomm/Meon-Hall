namespace Ultamation.SimplSharp.TexecomConnect;
        // class declarations
         class TexecomArea;
         class TexecomAreaCommand;
         class TexecomConnectManager;
         class TexecomKeyPress;
         class TexecomZone;
     class TexecomArea 
    {
        // class delegates
        delegate FUNCTION AreaInfoDelegate ( INTEGER isSet );

        // class events

        // class functions
        FUNCTION Initialise ( INTEGER area );
        FUNCTION AreaCommand ( INTEGER cmd );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Area;
        DelegateProperty AreaInfoDelegate Disarmed;
        DelegateProperty AreaInfoDelegate AreaInExit;
        DelegateProperty AreaInfoDelegate AreaInEntry;
        DelegateProperty AreaInfoDelegate AreaArmed;
        DelegateProperty AreaInfoDelegate AreaPartArmed;
        DelegateProperty AreaInfoDelegate AreaInAlarm;
    };

    static class TexecomAreaCommand // enum
    {
        static SIGNED_LONG_INTEGER DoFullArm;
        static SIGNED_LONG_INTEGER DoPartArm1;
        static SIGNED_LONG_INTEGER DoPartArm2;
        static SIGNED_LONG_INTEGER DoPartArm3;
        static SIGNED_LONG_INTEGER DoDisarm;
        static SIGNED_LONG_INTEGER DoReset;
    };

     class TexecomConnectManager 
    {
        // class delegates
        delegate FUNCTION ClientStatusChangedDelegate ( INTEGER status );
        delegate FUNCTION ClientMessageDelegate ( SIMPLSHARPSTRING msg , INTEGER status );
        delegate FUNCTION LCDDisplayDelegate ( SIMPLSHARPSTRING line1 , SIMPLSHARPSTRING line2 );

        // class events

        // class functions
        FUNCTION Debug ( INTEGER isOn );
        SIGNED_LONG_INTEGER_FUNCTION Initialise ( SIMPLSHARPSTRING ipAddress , INTEGER ipPort , SIMPLSHARPSTRING udlPassword , SIMPLSHARPSTRING LicenceKey );
        FUNCTION Connect ();
        FUNCTION Disconnect ();
        FUNCTION AutoUpdateDisplayOn ();
        FUNCTION AutoUpdateDisplayOff ();
        FUNCTION RequestZoneState ();
        FUNCTION RequestLCDDisplay ();
        FUNCTION VirtualKeyPress ( INTEGER key );
        FUNCTION OmitZone ( SIGNED_LONG_INTEGER zone );
        FUNCTION UnomitZone ( SIGNED_LONG_INTEGER zone );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty ClientStatusChangedDelegate ClientStatusChanged;
        DelegateProperty ClientMessageDelegate ClientMessage;
        DelegateProperty LCDDisplayDelegate LCDDisplayUpdated;
    };

    static class TexecomKeyPress // enum
    {
        static SIGNED_LONG_INTEGER Key1;
        static SIGNED_LONG_INTEGER Key2;
        static SIGNED_LONG_INTEGER Key3;
        static SIGNED_LONG_INTEGER Key4;
        static SIGNED_LONG_INTEGER Key5;
        static SIGNED_LONG_INTEGER Key6;
        static SIGNED_LONG_INTEGER Key7;
        static SIGNED_LONG_INTEGER Key8;
        static SIGNED_LONG_INTEGER Key9;
        static SIGNED_LONG_INTEGER Key0;
        static SIGNED_LONG_INTEGER Omit;
        static SIGNED_LONG_INTEGER Menu;
        static SIGNED_LONG_INTEGER Yes;
        static SIGNED_LONG_INTEGER Part;
        static SIGNED_LONG_INTEGER No;
        static SIGNED_LONG_INTEGER Area;
        static SIGNED_LONG_INTEGER Fire;
        static SIGNED_LONG_INTEGER PanicAlarm;
        static SIGNED_LONG_INTEGER Medical;
        static SIGNED_LONG_INTEGER Chime;
        static SIGNED_LONG_INTEGER Reset;
        static SIGNED_LONG_INTEGER Up;
        static SIGNED_LONG_INTEGER Down;
        static SIGNED_LONG_INTEGER Invalid;
    };

     class TexecomZone 
    {
        // class delegates
        delegate FUNCTION ZoneInfoDelegate ( INTEGER isSet );

        // class events

        // class functions
        FUNCTION Initialise ( INTEGER zone );
        FUNCTION OmitZone ();
        FUNCTION UnomitZone ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Zone;
        DelegateProperty ZoneInfoDelegate Secure;
        DelegateProperty ZoneInfoDelegate Active;
        DelegateProperty ZoneInfoDelegate Tamper;
        DelegateProperty ZoneInfoDelegate Short;
        DelegateProperty ZoneInfoDelegate Fault;
        DelegateProperty ZoneInfoDelegate FailedTest;
        DelegateProperty ZoneInfoDelegate Alarmed;
        DelegateProperty ZoneInfoDelegate ManualBypass;
        DelegateProperty ZoneInfoDelegate AutoBypass;
        DelegateProperty ZoneInfoDelegate Masked;
    };

namespace ultaTexe;
        // class declarations

