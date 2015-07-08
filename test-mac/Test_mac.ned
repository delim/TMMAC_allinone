//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

package test_mac;

//import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import inet.networklayer.autorouting.ipv4.IPv4NetworkConfigurator;
import inet.nodes.inet.AdhocHostMixim;
import org.mixim.base.modules.BaseNetwork;


//Network for testing hosts containing an INET network stack and a MiXiM 802.11 NIC.
network TEST_MAC extends BaseNetwork
{
    parameters:  
        int numHosts; // total number of hosts in the network
        int numFixHosts;
        @display("bgb=$playgroundSizeX,$playgroundSizeY,white,,;bgp=10,50");

    submodules:
        fixhost[numFixHosts]: AdhocHostMixim {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070");
        }
        host[numHosts]: AdhocHostMixim {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070");
        }
        //configurator: FlatNetworkConfigurator {
        configurator: IPv4NetworkConfigurator {
            parameters:
                @display("p=108,0;i=block/cogwheel;is=s");
        }
}
