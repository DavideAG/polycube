#pragma once
#include <string>
const std::string packetcapture_datamodel = R"POLYCUBE_DP(
module packetcapture {
  yang-version 1.1;
  namespace "http://polycube.network/packetcapture";
  prefix "packetcapture";
 
  import polycube-base { prefix "polycube-base"; }
  import ietf-inet-types { prefix "inet"; }
  import ietf-yang-types { prefix "yang";  }
  import polycube-transparent-base { prefix "polycube-transparent-base"; }
 
  organization "Polycube open source project";
  description "YANG data model for the Polycube Transparent-Packetcapture service";
 
  polycube-base:service-description "Transparent-Packetcapture Service";
  polycube-base:service-version "2.0";
  polycube-base:service-name "packetcapture";
  polycube-base:service-min-kernel-version "4.14.0";
 
  uses "polycube-transparent-base:transparent-base-yang-module";
 
 
  leaf capture {
    type enumeration {
      enum INGRESS;
      enum EGRESS;
      enum BIDIRECTIONAL;
      enum OFF;
    }
    default OFF;
    description "Packet capture status";
  }
  
  leaf anomimize {
     type boolean;
     default false;
  }
 
  leaf linktype {
    type uint32;
    description "Capture linktype (eg. ethernet, wifi..)";
  }
 
  leaf dump {
    type string;
    description "dump capture";
  }
 
  container filters {
    leaf snaplen {
      type uint32;
      default 68;
      description "Snapshot length";
    }
 
    leaf src {
      type inet:ipv4-prefix;
      description "IP source filter";
    }
 
    leaf dst {
      type inet:ipv4-prefix;
      description "IP destination filter";
    }
 
    leaf l4proto {
      type string;
      description "Level 4 protocol filter";
    }
 
    leaf sport {
      type uint16;
      description "Source port filter";
    }
 
    leaf dport {
      type uint16;
      description "Destination port filter";
    }    
  }

  container packet {
    description "packet info";

    leaf capturelen {
     type uint32;
     description "Capture length";
    }
 
    leaf packetlen {
     type uint32;
     description "Packet length";
    }
 
    leaf timestamp-seconds {
     type uint32;
     units seconds;
     description "timestamp - seconds";
    }
 
    leaf timestamp-microseconds {
     type uint32;
     description "timestamp - microseconds";
    }
  }
}
)POLYCUBE_DP";
