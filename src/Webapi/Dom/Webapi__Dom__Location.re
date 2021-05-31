type t = Dom.location;

/* a more ergonomic API would perhaps accept a Window.t directly instead of Location.t */
[@get] external href : t => string = "";
[@set] external setHref : (t, string) => unit = "href";
[@get] external protocol : t => string = "";
[@set] external setProtocol : (t, string) => unit = "protocol";
[@get] external host : t => string = "";
[@set] external setHost : (t, string) => unit = "host";
[@get] external hostname : t => string = "";
[@set] external setHostname : (t, string) => unit = "hostname";
[@get] external port : t => string = "";
[@set] external setPort : (t, string) => unit = "port";
[@get] external pathname : t => string = "";
[@set] external setPathname : (t, string) => unit = "pathname";
[@get] external search : t => string = "";
[@set] external setSearch : (t, string) => unit = "search";
[@get] external hash : t => string = "";
[@set] external setHash : (t, string) => unit = "hash";
[@get] external username : t => string = "";
[@set] external setUsername : (t, string) => unit = "username";
[@get] external password : t => string = "";
[@set] external setPassword : (t, string) => unit = "password";
[@get] external origin : t => string = "";

[@send] external assign: t => string => unit = "";
[@send] external reload: t => unit = "";
[@send]  external reloadWithForce: (t, [@as {json|true|json}] _) => unit = "reload";
[@send] external replace: t => string => unit = "";
[@send] external toString: t => string = "";
