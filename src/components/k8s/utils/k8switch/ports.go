/*
 * k8switch API
 *
 * LoadBalancer Reverse-Proxy Service
 *
 * API version: 2.0.0
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package swagger

type Ports struct {

	// Port Name
	Name string `json:"name,omitempty"`

	// UUID of the port
	Uuid string `json:"uuid,omitempty"`

	// Status of the port (UP or DOWN)
	Status string `json:"status,omitempty"`

	// Peer name, such as a network interfaces (e.g., 'veth0') or another cube (e.g., 'br1:port2')
	Peer string `json:"peer,omitempty"`

	// Type of the LB port (e.g. NODEPORT or DEFAULT)
	Type_ string `json:"type,omitempty"`
}
