# Peer to Peer File Sharing

## Basic Layout

- Main Server: Responsible for listing peers
- Client application: Bundles Peer Server to share files and Peer Client to recieve data from other peers. Should run on seperate threads to make sure download and uploads both work parallel.