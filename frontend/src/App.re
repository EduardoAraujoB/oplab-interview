module Styles = {
  open Css;

  let wrapper = style([display(block)]);
};

[@react.component]
let make = () => {
  <div className=Styles.wrapper> <SmartphonePreview /> <AppInfo /> </div>;
};
