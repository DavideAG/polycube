Packetcapture service
=====================

This transparent service allows you to capture packets on the interface to which it is attached, apply filters and obtain capture in *.pcap* format. In particular, the service allows to save the capture in the local filesystem or it can communicate with a remote client which will receive the dump.

An example of a client that uses the REST api of the packetcapture service is present in '*Packetcapture_Client*' direcotry.

Features
--------
- Transparent Packetcapture service
- IPv4 support
- Support: source prefix, destination prefix, source port, destination port and layer 4 protocol filters.
- Support snaplen
- Support localmode or network mode operation

Limitations
-----------
- Unsupported IPv6

How to use
----------
The packetcapture service is a transparent service, it can be attached to a cube port.

Create the service
^^^^^^^^^^^^^^^^^^^^^


::

    #create the packetcapture service
    polycubectl packetcapture add sniffer capture=bidirectional

the packet capture service can capture packets in three differents ways:

- ingress only: **capture=ingress**
- egress only: **capture=egress**
- bidirectional: **capture=bidirectional**
- not working mode: **capture=off**

In this example the service named '*sniffer*' will work in bidirectional mode.


Attach to a cube port
^^^^^^^^^^^^^^^^^^^^^
::

    #attach the service to a cube port
    polycubectl attach sniffer br1:toveth1

Now the packetcapture service is attached to the port *toveth1* of the bridge *br1*

                +----------+
 veth1 ---**x**-|   br1    |------ veth2
                +----------+


Filters
------------------
the following filters can be applied to incoming packets:

- source prefix
- destination prefix
- source port
- destination port
- later 4 protocol

Source prefix filter
^^^^^^^^^^^^^^^^^^^^^
::

    #application of the source prefix filter
    polycubectl sniffer filters set src=10.10.10.10/24

Destination prefix filter
^^^^^^^^^^^^^^^^^^^^^
::

    #application of the destination prefix filter
    polycubectl sniffer filters set dst=10.10.10.10/24

Source port filter
^^^^^^^^^^^^^^^^^^^^^
::

    #application of the source port filter
    polycubectl sniffer filters set sport=80

Destination port filter
^^^^^^^^^^^^^^^^^^^^^
::

    #application of the destination port filter
    polycubectl sniffer filters set dport=80

Layer 4 protocol filter
^^^^^^^^^^^^^^^^^^^^^
::

    #application of the layer 4 protocol filter
    polycubectl sniffer filters set l4proto=tcp

Snaplen filter
^^^^^^^^^^^^^^^^^^^^^
::

    #application of the snaplen filter
    polycubectl sniffer filters set snaplen=65535


Filters can be viewed using the command **polycubectl sniffer filters show**

Get the capture Dump
------------------
When the service is not set as *networkmode*, the dump is automatically written in a resilient way in the working directory.

It is possible to visualize the path of the capture file using the command: **polycubectl sniffer show dump**

Otherwise, if the service is set as network mode, the capture file can be requested through the use of the client.

How to use the demo Client
^^^^^^^^^^^^^^^^^^^^^
::

    #start the client script
    python3 client.py <IPv4 address> <file destination name>


Networkmode
^^^^^^^^^^^^^^^^^^^^^
::

    #networkmode on
    polycubectl sniffer set networkmode=true

    #networkmode off
    polycubectl sniffer set networkmode=false
